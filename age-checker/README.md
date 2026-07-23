# Age Checker

Takes a person's age and classifies them into a category.

## Features

- Categories: minor (under 18), adult (18-64), senior citizen (65+)
- Validates that age isn't negative

## How to run

g++ main.cpp
.\a.exe

## What I learned

Used an `if / else if` chain where each condition only needs to check one boundary, since earlier conditions already rule out everything above them - avoided redundant range checks like `age >= 18 && age < 65`.