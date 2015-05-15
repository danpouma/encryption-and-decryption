For each byte (char) of a text file, transpose the most significant bit and append it to the least significant bit, then take the complement (not) of the byte.

Original Byte
10011010

After Transposition
00110101

After Complement
11001010

To decrypt the text, reverse the encryption steps.

Requirements

Read a text file to be encrypted/decrypted into your program
Write a program to decrypt a file
Write a program to encrypt a file
Write the result of the encryption/decryption process.
Use bitwise operators to encrypt/decrypt the file
Use a typedef in your program
No global variables (global const and #define are ok)
BONUS POINTS for taking the input and output file from the command line.
