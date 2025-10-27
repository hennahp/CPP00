# CPP00 - Introduction to C++

This repository contains the solutions for the **CPP Module 00** from the 42 school curriculum. It introduces fundamental C++ concepts including namespaces, classes, member functions, stdio streams, initialization lists, static, const, and basic OOP principles.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Exercises](#exercises)
  - [Exercise 00: Megaphone](#exercise-00-megaphone)
  - [Exercise 01: PhoneBook](#exercise-01-phonebook)
  - [Exercise 02: Account](#exercise-02-account)
- [Compilation](#compilation)
- [Usage](#usage)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)

---

## 🎯 Overview

**CPP00** is the first module in the C++ piscine series. It covers:

- **Namespaces** and **classes**
- **Member functions** (methods)
- **Standard I/O streams** (`std::cout`, `std::cin`)
- **Initialization lists**
- **Static** and **const** keywords
- **Basic Object-Oriented Programming**

All exercises must be compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98

📚 Exercises
Exercise 00: Megaphone
Objective: Create a program that converts strings to uppercase.

Description:

Takes command-line arguments and outputs them in uppercase
If no arguments provided, outputs: * LOUD AND UNBEARABLE FEEDBACK NOISE *
Files:

megaphone.cpp
Compilation:
    cd ex00
    make

Usage:
    ./megaphone "shhhhh... I think the students are asleep..."
    # Output: SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

    ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
    # Output: DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

    ./megaphone
    # Output: * LOUD AND UNBEARABLE FEEDBACK NOISE *`       

Key Concepts:

Command-line arguments
String manipulation
std::toupper()


Exercise 01: PhoneBook
Objective: Create a simple phonebook application using classes.

Description:

Store up to 8 contacts (oldest contact replaced when full)
Each contact has: First Name, Last Name, Nickname, Phone Number, Darkest Secret
Three commands: ADD, SEARCH, EXIT
Files:

PhoneBook.hpp / PhoneBook.cpp
Contact.hpp / Contact.cpp
main.cpp

Compilation:
    cd ex01
    make

Usage:
    ./phonebook

Commands:
    ADD - Add a new contact (prompts for all fields)
    SEARCH - Display all contacts in table format, then view details by index
    EXIT - Quit the program

Features:       
    Fields cannot be empty
    Circular buffer (8 contacts max, FIFO replacement)
    Formatted table output (10 characters per column)
    Strings longer than 10 chars are truncated with .

Key Concepts:   
    Classes and objects
    Member functions (getters/setters)
    Constructors and destructors
    Arrays of objects
    Input validation
    String formatting with std::setw()

Exercise 02: Account

Objective: Recreate missing source code based on header file and log output.

Description:
    Implement Account.cpp based on provided Account.hpp
    Match the output format shown in 19920104_091532.log
    Implement timestamp display, deposits, withdrawals, and account info

Files:
    Account.hpp (provided - DO NOT MODIFY)
    Account.cpp (my implementation)
    tests.cpp (provided)
    19920104_091532.log (reference output)

Compilation:
    cd ex02
    make

Usage:
    ./account > my_output.log

Testing:
# Compare output (ignoring timestamps)
sed 's/\[.*\]/[TS]/' my_output.log > temp1.log
sed 's/\[.*\]/[TS]/' 19920104_091532.log > temp2.log
diff temp1.log temp2.log

Note on Destructor Order: ⚠️ Your destructor order may be reversed (7→0 instead of 0→7). This is CORRECT C++ behavior (LIFO - Last In First Out). The C++98 standard requires objects to be destroyed in reverse order of construction.

Key Concepts:
    Static member variables
    Static member functions
    Private constructors
    const member functions
    Time formatting (std::strftime())
    Understanding header files
    Reverse engineering from output

🔨 Compilation

Each exercise has its own Makefile with the following rules:
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Rebuild everything

All projects compile with:

c++ -Wall -Wextra -Werror -std=c++98

🚀 Usage

Ex00 - Megaphone
cd ex00
make
./megaphone "hello world"

Ex01 - PhoneBook
cd ex01
make
./phonebook
# Enter commands: ADD, SEARCH, EXIT

Ex02 - Account
cd ex02
make
./account

🎓 Learning Objectives
By completing CPP00, you will learn:

Exercise 00
✅ Basic C++ program structure
✅ Using std::cout for output
✅ String manipulation
✅ Command-line argument handling
Exercise 01
✅ Class declaration and implementation
✅ Member variables and functions
✅ Constructors and destructors
✅ Getters and setters (encapsulation)
✅ Input/output with std::cin and std::cout
✅ String handling in C++
✅ Formatted output with <iomanip>
Exercise 02
✅ Static members
✅ const member functions
✅ Time manipulation (<ctime>)
✅ Understanding class design from headers
✅ Destructor order (LIFO principle)
✅ Matching specific output formats

📖 Resources
Official Documentation
C++ Reference
C++98 Standard
Tutorials
LearnCpp.com
CPlusPlus.com
Key Topics
Namespaces: std namespace
Classes: Class declaration
I/O Streams: iostream
Static members: Static data members
Time handling: ctime

⚙️ Project Structure
cpp00/
├── ex00/
│   ├── megaphone.cpp
│   └── Makefile
├── ex01/
│   ├── Contact.hpp
│   ├── Contact.cpp
│   ├── PhoneBook.hpp
│   ├── PhoneBook.cpp
│   ├── main.cpp
│   └── Makefile
├── ex02/
│   ├── Account.hpp          (provided)
│   ├── Account.cpp          (your implementation)
│   ├── tests.cpp            (provided)
│   ├── 19920104_091532.log  (reference)
│   └── Makefile
└── README.md

📝 Notes
C++98 Standard
All code must comply with C++98 standard:

❌ No C++11 features (auto, range-based for loops, nullptr, etc.)
❌ No STL containers except in ex02 test file
✅ Use traditional for loops
✅ Use NULL instead of nullptr

Coding Style
Use Orthodox Canonical Form for classes (starting from CPP02)
No global variables
No forbidden functions
Memory leaks are forbidden

Common Pitfalls
Forgetting to check for empty input
Not handling EOF (Ctrl+D)
Buffer overflow with fixed-size arrays
Incorrect destructor order understanding

🏆 Author
42 Student

📜 License
This project is part of the 42 school curriculum.

🙏 Acknowledgments
42 School for the curriculum
Fellow students for peer evaluation
The C++ community for excellent documentation

Happy Coding! 🚀

Remember: In C++, we don't make mistakes, we make learning opportunities! 😄 ```