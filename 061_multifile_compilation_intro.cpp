/*
Intro to Multifile Compilation

- Separte files to keep your application organized
- multifile compilation has an additional step >> pre-processing
  - we have to send a message to the preprocessor that we created
  - a header file we want to include in our code
  - we have to do it 1 time
  - sending message by using pre-processor directive
  - pre-processor directive >> 
      #ifndef name_h
      #define name_h
      ... everything that goes to the header file goes here
      #endif
- when multiple file to compile >> have to change the way how compiling files
- video >> how to do this with g++
- g++ file1.cpp file2.cpp >> ./a.out (this is the bare minimum...)

1. Header file:
  - #include <iostream>
  - custom header files >> #include "custom.h"
  - extension: h
  - header files have to be included in both source files (imp(2) and main(3))

2. Implementation file:
  - extension: cpp
  - function definitions

3. Main file (where 1-2 used):
  - main func exist here
  - 1 main file
  - it can be collections of function
  - funcs are not necessarily defined here
  - calling func from here
  - extensions: cpp, c, cc
*/