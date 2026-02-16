*This project has been created as part of the 42 curriculum by nharutyu*

# C++ — Module 02

**Ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form**
Version: 9.0

---

# Description

This repository contains the exercises for **C++ Module 02** of the 42 curriculum.
The goal of this module is to introduce and practice:

* Ad-hoc polymorphism
* Operator overloading
* Orthodox Canonical Class Form

Each exercise builds a fixed-point number class and extends it step by step with additional constructors, conversions, operator overloads, and geometric logic.

All classes follow the Orthodox Canonical Form, meaning they implement:

* Default constructor
* Copy constructor
* Copy assignment operator
* Destructor

The final result is a reusable fixed-point number library and supporting geometry utilities.

---

# Library Details

## Fixed Class

The core of this module is the `Fixed` class, which represents a fixed-point number using:

* A private integer raw value
* 8 fractional bits (static constant)
* Conversion between integer, float, and fixed-point formats

### Features

* Fixed-point storage with 8 fractional bits
* Integer and float constructors
* Conversion methods:

  * `toFloat()`
  * `toInt()`
* Raw access methods:

  * `getRawBits()`
  * `setRawBits()`
* Full operator overloading (comparisons and arithmetic)
* Increment/decrement operators
* Static `min` / `max` helpers

---

## Point Class (ex03)

Exercise 03 adds a `Point` class:

* Represents a 2D point using two `Fixed` values
* Immutable coordinates after construction
* Uses Orthodox Canonical Form

Also includes:

```
bool bsp(Point const a, Point const b, Point const c, Point const point);
```

This function checks whether a point lies strictly inside a triangle.

---

# Instructions

## Compilation

Each exercise directory (`ex00`, `ex01`, `ex02`, `ex03`) contains its own Makefile.

Compile inside an exercise folder:

```bash
make
```

Required compiler and flags:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Available rules:

```bash
make
make clean
make fclean
make re
```

---

## Execution

Run the compiled executable:

```bash
./program_name
```

Example:

```bash
./fixed
```

Each exercise includes a `main.cpp` with subject tests or demonstration cases.

---

# Project Structure

```
ex00/
ex01/
ex02/
ex03/
    Makefile
    main.cpp
    Fixed.hpp
    Fixed.cpp
    Point.hpp      (ex03)
    Point.cpp      (ex03)
    bsp.cpp        (ex03)
```

---

# General Rules Followed

* C++98 standard
* No forbidden functions (`printf`, `malloc`, `free`, etc.)
* No external libraries beyond the standard library
* No STL usage (as restricted for this module)
* No `using namespace`
* No `friend` unless explicitly allowed
* No non-template function implementations inside headers
* Include guards used in all headers
* No memory leaks

---

# Exercises Overview

## ex00 — Orthodox Canonical Form

Implementation of the basic `Fixed` class with raw value storage and canonical form methods.

## ex01 — Useful Fixed-Point Class

Adds:

* Int and float constructors
* Float/int conversion
* Stream output operator overload

## ex02 — Operator Overloading

Adds:

* Comparison operators
* Arithmetic operators
* Increment/decrement
* Static min/max functions

## ex03 — BSP (Optional)

Adds:

* `Point` class
* BSP algorithm to detect if a point is inside a triangle

---

# Resources

Reference materials used:

* C++98 standard reference
* cppreference documentation
* 42 subject PDF
* Fixed-point arithmetic articles and tutorials
* Operator overloading guides

---

# AI Usage Disclosure

AI tools were used as a learning aid for:

* Concept explanations (fixed-point math, operator overloading)
* Understanding Orthodox Canonical Form requirements
* README structure and formatting guidance

AI was **not used to generate final submission code**.
All implementations were written, tested, and understood manually.

---

# Testing

Tested with:

* Subject-provided examples
* Copy and assignment scenarios
* Arithmetic edge cases
* Increment/decrement behavior
* Triangle inclusion edge cases (ex03)

---

# Submission Checklist

Per exercise:

* Makefile
* Source files (`.cpp` / `.hpp`)
* Test `main.cpp`
* Compiles with required flags
* No memory leaks
* Orthodox Canonical Form implemented
