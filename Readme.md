# C++ LeetCode Solutions

This repository contains my solutions to LeetCode problems, implemented in C++. Each problem solution is accompanied by proper unit tests to ensure correctness and efficiency. Every problem has its own directory under the problems folder, where the solution, its test file, and a CMakeLists.txt file for building the project can be found.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- CMake (Version 3.10 or higher recommended)
- A C++ compiler (GCC, Clang, MSVC, etc.) that supports at least C++11

### Structure

Each problem's directory is structured as follows:

- `CMakeLists.txt` - CMake configuration file to build the executable
- `problemX_test.cpp` - Test file for the problem solution
- `problemX.cpp` - Implementation of the problem solution
- `problemX.h` - Header file for the problem solution

### Building and Running a Solution

To build and run a solution for a specific problem, follow these steps:

1. **Navigate to the Problem Directory**

   Open a terminal and change to the directory of the problem you want to solve.

   ```
   cd problems/problem1
   ```

2. **Build the Project**

   Create `build` folder. Next, navigate to the `build` directory and build the project by running the below commands.

   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

4. **Run the Executable**

   After building, you can run the executable created inside the `build` directory.

   ```
   ./main
   ```

## Contributing

Contributions to improve the solutions or to add new solutions are welcome. Please feel free to submit a pull request or open an issue.

## License

This project is open-sourced under the [MIT License](LICENSE.md).

---
