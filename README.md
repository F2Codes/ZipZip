# 🗜️ Simple RLE Zip/Unzip in C

A **simple text compression and decompression project** written in **pure C** using the **Run-Length Encoding (RLE)** algorithm.  
This project is **lightweight**, **doesn't require external libraries**, and can even run on **Android devices** using **Termux** or **Cxxdroid**.  

---

## 🚀 Features

- Compress a text file (`input.txt`) into a simple `.rle` format  
- Decompress `.rle` files back to the original text  
- Written in **pure C** 🖥️  
- Can run on **phones or PCs**  
- Great for **learning C and file handling**  

---

## 📂 Project Structure

ZipProject/ ├─ src/ │   └─ main.c         # Main C code ├─ input.txt           # Sample text file ├─ output.rle          # Compressed file generated └─ decompressed.txt    # Decompressed output

---
## 🌐To see more Features
https://F2Codes.GitHub.io/ZipZip/

## ⚡ How to Run

### On Android (Termux)

1. Install Termux and tools:
```bash
pkg update
pkg install clang git
use bash and download ZipProject

2. Navigate to project folder:



cd ZipProject/src

3. Compile the program:



clang main.c -o myzip

4. Run the program:



./myzip

1 → Compress input.txt → output.rle

2 → Decompress output.rle → decompressed.txt



---

💡 Notes

RLE is simple and effective for repetitive text, but not ideal for large or binary files.

You can expand this project to support multiple files or folders.

Perfect for learning file I/O, loops, and basic compression in C.



---

📝 License

This project is licensed under the MIT License.


---

Made with ❤️ by Matin 
