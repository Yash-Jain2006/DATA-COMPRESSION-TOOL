# DATA-COMPRESSION-TOOL

*COMPANY*:  CODTECH IT SOLUTIONS

*NAME*: YASH JAIN

*INTERN_ID*: CT06DG3399

*DOMAIN*: C PROGRAMMING

*DURATON*: 6 WEEKS

*MENTOR*: NEELA SANTOSH

**DESCRIPTION:**
This project is a basic data compression and decompression tool built in C language using the Run-Length Encoding (RLE) algorithm. RLE is a simple and efficient compression technique that reduces the size of repetitive sequences of characters by storing the count of consecutive occurrences along with the character.
This tool can compress any text file into a smaller format and also decompress the encoded file back into its original text. It serves as a fundamental demonstration of how classical compression algorithms work, making it a great starting point for learners and a handy utility for small-scale compression needs.

**TOOLS AND TECHNOLOGIES USED:**
-Programming Language: C
-Compiler: GCC (GNU Compiler Collection)
-IDE (optional): Code::Blocks 
-Version Control: Git & GitHub

**PROJECT STRUCTURE:**
├── compression.c        # Core logic for compression
├── decompression.c      # Core logic for decompression
├── main.c               # Entry point (menu-driven CLI)
├── input.txt            # Sample input file
├── compressed.txt       # Output compressed file
├── decompressed.txt     # Restored original file
└── README.md            # Documentation


**SUMMARY:**
The project provides a command-line interface (CLI) that accepts user inputs to perform two main operations:
Compression – Reads a text file, applies Run-Length Encoding, and writes the compressed content into a new file.
Decompression – Reads a compressed file (in RLE format), decodes it, and restores the original text file.
This implementation highlights modular programming in C, with clean separation of logic for file handling, encoding, and decoding. It is lightweight, portable, and efficient for repetitive datasets.

**OUTPUT:**
- Compressing the data
  <img width="940" height="529" alt="Image" src="https://github.com/user-attachments/assets/ca7dc1ce-aa86-4e76-b087-c9bf0429bb0d" />
 
- Decompressing the data
  <img width="940" height="529" alt="Image" src="https://github.com/user-attachments/assets/bada4ec1-0971-48f7-b8fd-87a6a8d99e59" />
