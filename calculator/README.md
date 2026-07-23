# Calculator

A choice-based calculator that lets the user pick one operation to perform.

## Features

- Supports sum, difference, product, division, and modulus
- Validates the operation choice (1-5); shows an error for anything else
- Handles divide-by-zero safely instead of crashing
- Modulus uses separate integer inputs since `%` doesn't work on decimals

## How to run

g++ main.cpp
.\a.exe

## What I learned

Fixed real bugs while building this: integer-division truncation (switched to `double`), a divide-by-zero crash, and structuring an `if / else if` chain so only one operation runs based on user choice.