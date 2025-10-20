# Unique Bitvector Check

**Language:** C++  
**Purpose:** Checks whether all characters in a given string are unique by using a bit vector and bitwise operations.  
This project demonstrates **bit manipulation**, **input validation**, and **command-line parsing**.

---

##  How It Works
- Uses a single `unsigned int` as a bit vector (26 bits for letters `a`–`z`).
- Each bit represents whether a letter has been seen.
- Bitwise `AND` and `OR` operations detect duplicates efficiently.
- Includes validation for lowercase-only input.

---

##  Build & Run
```bash
g++ -O2 -std=c++17 -o unique unique.cpp
./unique <string>

