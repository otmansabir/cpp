# C++ (CPP) Modules

This repository contains my solutions and exercises for the 42 School C++ Modules (CPP00–CPP09). Each module is self-contained and explores a specific set of C++98 concepts, starting from the basics and building up to templates and the STL.

> Standard and flags used throughout:
>
> - C++ standard: C++98
> - Recommended flags: `-Wall -Wextra -Werror` (and optionally `-std=c++98` if your compiler defaults to a newer standard)

## Repository structure

Each directory corresponds to one module and typically contains several exercises (`ex00`, `ex01`, …), source files and, in most cases, a `Makefile`.

- [Module 00](Module%2000)
- [Module 01](Module%2001)
- [Module 02](Module%2002)
- [Module 03](Module%2003)
- [Module 04](Module%2004)
- [module 05](module%2005)
- [module 06](module%2006)
- [Module 07](Module%2007)
- [Module 08](Module%2008)
- [Module 09](Module%2009)

## What each module covers (high level)

- Module 00: C++ basics, I/O streams, strings, simple classes
- Module 01: Memory allocation, references, pointers, class basics
- Module 02: Orthodox Canonical Form, operator overloading
- Module 03: Inheritance
- Module 04: Subtype polymorphism, abstract classes, interfaces
- Module 05: Exceptions, nested classes, practical class design
- Module 06: Casting (static_cast, dynamic_cast, reinterpret_cast, const_cast)
- Module 07: Templates
- Module 08: STL containers, iterators, algorithms
- Module 09: Additional STL/algorithms and projects

Note: The exact scope of each module can vary by curriculum version, but the topics above are the commonly covered themes.

## Prerequisites

- A C++ compiler capable of C++98 (e.g., `clang++` or `g++`)
- Make (if using provided Makefiles)

## Building and running

Most exercises include a `Makefile`. The usual workflow is:

```sh
cd "Module 00/ex00"
make
./program_name   # the exact binary name depends on the exercise/Makefile
```

If a `Makefile` is not present, you can compile manually, for example:

```sh
clang++ -std=c++98 -Wall -Wextra -Werror -o program_name main.cpp
./program_name
```

Replace `main.cpp` and `program_name` with the appropriate files and output name for the specific exercise.

## Project conventions

- Standard: C++98
- Flags: `-Wall -Wextra -Werror`
- No external dependencies unless explicitly allowed by the subject of the exercise
- Prefer strict compilation and clean warnings

## Status

Work-in-progress across modules. Each exercise directory typically builds independently.

## License

No license has been specified for this repository.

## Author

- GitHub: [@otmansabir](https://github.com/otmansabir)
