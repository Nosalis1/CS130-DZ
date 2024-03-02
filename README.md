# CS130 - C/C++ Programming Language Homework

## Overview

This project comprises a series of 15 tasks assigned as homework for the CS130 course focused on C/C++ programming
languages.
The purpose of this homework is to reinforce the understanding of fundamental concepts in C/C++ programming,
including but not limited to data types, control structures, functions, arrays, pointers, and file handling.
Each task is designed to progressively challenge students and enhance their proficiency in C/C++ programming.

## Key Features

<ol>
<li><a href="DZ-01">Introduction to the C language</a></li>
<li><a href="DZ-02">Conditional statements and loops, Functions</a></li>
<li><a href="DZ-03">Arrays and Strings</a></li>
<li><a href="DZ-04">Pointers</a></li>
<li><a href="DZ-05">Structures, Unions, Memory management</a></li>
<li><a href="DZ-06">Preprocessor, Files, Error Handling</a></li>
<li><a href="DZ-07">Basics of the C++ Language</a></li>
<li><a href="DZ-08">Classes and Objects</a></li>
<li><a href="DZ-09">Object-Oriented Principles of C++</a></li>
<li><a href="DZ-10">Object Composition, Inheritance</a></li>
<li><a href="DZ-11">Polymorphism, Abstraction, Templates</a></li>
<li><a href="DZ-12">C++ Standard Library and STL</a></li>
<li><a href="DZ-13">Program Output, Exception Handling</a></li>
<li><a href="DZ-14">Input/Output in C++</a></li>
<li><a href="DZ-15">Modern C++</a></li>
</ol>

## Requirements

- Developer Environment:
    - C/C++ Compiler (e.g,`GCC` for C,`g++` for C++)
    - Text Editor or Integrated Development Environment(IDE) such
      as `Visual Studio/Visual Studio Code`,`Code::Blocks`,`CLion`,`Eclipse`,etc.
    - Operating System: Compatible with Windows, macOS, or Linux
- External Libraries or Tools:
    - [Library/Tool Name]: Description of the library or tool, if any, required for specific tasks. Include installation
      instructions if necessary.

## Usage

Each task is provided with clear instructions and requirements in the homework document.
Programs should be compiled and executed using appropriate compilers and development environments.

1. Select the program you want to compile
2. Open the directory content in your IDE
3. Compile the program using a C/C++ compiler.
4. Run the compiled executable.
5. Follow the prompts to input the required values.

To run the compiled executable:

1. Open terminal
2. Navigate to the project directory: 
```commandline
cd path/to/project/directory
```
3. Compile the source code:
  - For C programs:
```commandline
gcc -o program_name program_name.c
```
  - For C++ programs:
```commandline
g++ -o program_name program_name.cpp
```
4. Run the compiled executable:`./program_name`

## Configuration

In this project, we adhere to the following programming conventions and rules:

- **Variable Naming Convention**: Variables are named using `snake_case` notation, where words are separated by
  underscores.
- **Function Naming Convention**: Functions are named using `snake_case` notation, following the same convention as
  variable names.
- **Indentation**: We use a standard indentation of 4 spaces for code readability.
- **Data Types**: We primarily use standard C/C++ data types such as `int`,`float`,`double`,`char`,etc., depending on
  the
  requirements of each task.There are also custom defined types such as:

```c
typedef unsigned int u_int32;
typedef unsigned long long size_t;
```

```c++
using unsigned int = u_int32;
using unsigned long long = size_t;
using const char* = c_str;
```

- **Constants**: Constants are defined using the `const` keyword and are written in all uppercase letters with
  underscores separating words.
- **Type Casting**: Type casting is preformed explicitly using appropriate casting operators(
  e.g.`(type)`,`static_cast<type>()`,`dynamic_cast<type>()`)whenever necessary to avoid implicit type conversions.
- **Error Handling**: Error handling mechanisms such as conditional statements, try-catch blocks, or error codes are
  implemented where applicable to handle exceptional cases.
- **File Organization**: Code is organized into logical modules and functions to improve code maintainability and
  reusability.
- **Header Files**: Header files are used to declare function prototypes, macros, and type definitions for better code
  organization and modularity.
- **Memory Management**: Dynamic memory allocation and deallocation are preformed
  using `malloc()` `calloc()` `realloc()`, and `free()` functions in C, and `new` and `delete` operators in C++ where
  necessary, following best practices to avoid memory leaks.
- **File I/O**: File input/output operations are preformed using standard file handling
  functions (`fopen()`,`fclose()`,`fprintf()`,`fscanf()`,etc.) in C and file streams (`ifstream`,`ofstream`) in C++,
  ensuring proper error handling and resource management.
- **Coding Standards**: We follow the coding standards and guidelines provided by the course instructor or the C/C++
  programming community.

## Contributing

I welcome contributions! Please follow these steps:

1. Fork the repository.
2. Create a new branch: `git checkout -b feature/your-feature`.
3. Make your changes and commit them: `git commit -am 'Add new feature'`.
4. Push to the branch: `git push origin feature/your-feature`.
5. Submit a pull request detailing your changes.

## License

This project is licensed under the [MIT License](LICENSE.md) - see the [LICENSE.md](LICENSE.md) file for details.

## Support

For any questions or clarifications regarding the homework tasks,
contact [Aleksa](mailto:aleksa.stanojevic.5726@metropolitan.ac.rs).

## Acknowledgements

I would like to thank the following individuals and organizations for their contributions:

- [Person/Organization 1]
- [Person/Organization 2]
- ...

## About

[Provide information about your organization or project team.]
