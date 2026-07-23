# Grade Calculator

Takes a student's marks and prints a letter grade.

## Features

- Grades: A (90-100), B (80-89), C (70-79), D (60-69), E (50-59), FAIL (below 40)
- Validates marks are within 0-100; prints an error for anything outside that range

## How to run

g++ main.cpp
.\a.exe

## What I learned

Traced through boundary conditions carefully (e.g. why `marks < 0 || marks > 100` is correct but `marks <= 0` isn't) and fixed a bug where invalid input was silently graded as a real F instead of being flagged as invalid.