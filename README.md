C++ - Module 02
Ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form
Version: 9.0

Summary
This repository contains the exercises for C++ Module 02. The goal is to teach
ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form
(default constructor, copy constructor, copy assignment operator, destructor).

Contents
- I  Introduction
- II General rules
- III New rules
- IV AI Instructions
- V  Exercise 00: My First Class in Orthodox Canonical Form
- VI Exercise 01: Towards a more useful fixed-point number class
- VII Exercise 02: Now we’re talking
- VIII Exercise 03: BSP
- IX Submission and Peer-Evaluation

Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an
extension of C. These modules introduce Object-Oriented Programming using
C++98. The exercises focus on designing classes in the Orthodox Canonical Form
and on operator overloading and polymorphism.

General rules
- Compile with `c++` and the flags `-Wall -Wextra -Werror`.
- Code must compile with `-std=c++98` where specified.
- Exercise directories: `ex00`, `ex01`, `ex02`, `ex03`.
- Class names use UpperCamelCase; files follow the class name (e.g., `BrickWall.hpp`).
- All output lines must end with a newline and use standard output.
- `using namespace` and `friend` are forbidden unless explicitly allowed.
- External libraries beyond the standard library (and C++11+/Boost) are forbidden.
- Forbidden C functions include `*printf()`, `*alloc()` and `free()`.
- The STL is not allowed in Modules 02–07 (allowed in Modules 08–09).
- Avoid memory leaks when using `new`.
- From Module 02 onward, classes must follow the Orthodox Canonical Form.
- Do not implement non-template function definitions in header files.
- Include guards are required for headers to avoid double inclusion.

New rules (Orthodox Canonical Form)
Each class must implement:
- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor

AI Instructions
- Use AI responsibly: the exercises are intended for learning and peer evaluation.
- Do not ask AI for direct answers; use it as a guide if needed but ensure you
	understand and can explain your code during evaluations.

Exercises

Exercise 00 — My First Class in Orthodox Canonical Form (turn-in: `ex00/`)
Files to turn in: `Makefile`, `main.cpp`, `Fixed.hpp`, `Fixed.cpp`.
Goal: implement a `Fixed` class that stores a fixed-point value with 8 fractional bits.
Required members: private raw integer, static const fractional bits = 8,
default/copy constructor, copy assignment, destructor, `getRawBits()` and `setRawBits()`.

Exercise 01 — Towards a more useful fixed-point number class (turn-in: `ex01/`)
Files to turn in: `Makefile`, `main.cpp`, `Fixed.hpp`, `Fixed.cpp`.
Allowed: `roundf` from `<cmath>`.
Add integer and float constructors, `toFloat()`, `toInt()`, and overload the stream
insertion operator to print the floating-point representation.

Exercise 02 — Now we’re talking (turn-in: `ex02/`)
Files to turn in: `Makefile`, `main.cpp`, `Fixed.hpp`, `Fixed.cpp`.
Allowed: `roundf` from `<cmath>`.
Add operator overloads for comparisons (`> < >= <= == !=`), arithmetic (`+ - * /`),
and increment/decrement (pre/post). Implement `static` `min`/`max` overloads for
both non-const and const references.

Exercise 03 — BSP (optional) (turn-in: `ex03/`)
Files to turn in: `Makefile`, `main.cpp`, `Fixed.hpp`, `Fixed.cpp`, `Point.hpp`, `Point.cpp`, `bsp.cpp`.
Allowed: `roundf` from `<cmath>`.
Implement a `Point` class (with `Fixed` attributes for `x` and `y`) in Orthodox
Canonical Form and the function `bool bsp(Point const a, Point const b, Point const c, Point const point)`
which returns `true` if `point` is strictly inside the triangle (vertices and edges count as outside).

Turn-in checklist (per exercise)
- `Makefile` (compiles with `c++ -Wall -Wextra -Werror`)
- `main.cpp` (provided or written tests)
- `Fixed.hpp`, `Fixed.cpp` (and `Point.hpp`, `Point.cpp`, `bsp.cpp` for ex03)



