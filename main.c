#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to compress a file using RLE
void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("Error opening files.\n");
        return;
    }

    char current, previous;
    int count = 1;

    previous = fgetc(in);
    if (previous == EOF) {
        fclose(in);
        fclose(out);
        return;
    }

    while ((current = fgetc(in)) != EOF) {
        if (current == previous) {
            count++;
        } else {
            fprintf(out, "%c%d", previous, count);
            previous = current;
            count = 1;
        }
    }

    fprintf(out, "%c%d", previous, count);

    fclose(in);
    fclose(out);
    printf("File compressed successfully to %s\n", outputFile);
}

// Function to decompress an RLE file
void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    int count;

    while ((ch = fgetc(in)) != EOF) {
        if (isalpha(ch) || ispunct(ch) || ch == ' ') {
            if (fscanf(in, "%d", &count) == 1) {
                for (int i = 0; i < count; i++) {
                    fputc(ch, out);
                }
            }
        }
    }

    fclose(in);
    fclose(out);
    printf("File decompressed successfully to %s\n", outputFile);
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    printf("RUN-LENGTH ENCODING TOOL\n");
    printf("=========================\n");
    printf("1. Compress a file\n");
    printf("2. Decompress a file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter input file name: ");
    scanf("%s", inputFile);

    printf("Enter output file name: ");
    scanf("%s", outputFile);

    if (choice == 1) {
        compressFile(inputFile, outputFile);
    } else if (choice == 2) {
        decompressFile(inputFile, outputFile);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
