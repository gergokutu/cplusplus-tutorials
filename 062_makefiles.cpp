/*
Makefiles (theory)
- automate the build process
- this video (Linux or MAC machine)
- optimizing the compiling 
  - multifile, we do not have to recompile everything
  - when we have just little change
  - after we recompiled the little individual changes
  - we can link them together

Best build process:
- file1.cpp, file2.cpp
- cpp >> o >> link the o's >> a.out
- only file1 changed
- just recompile to file1.o
- than link it with file2.o
- get the new a.out
- this is easiest if we create a makefile to automate the process

Makefile:
- minimize the amount of compilation necessary
- checks the date of the files
- just combines a portion if needed
- exact commands in the next video...
- has it own synthax
- when we want to compile with the makefile in the terminal >> make
- it's a text file with name >> makefile
- define the files and their dependencies in it
- file1.o:file1.cpp >> file1.o comes from file1.cpp
- next line >> indent and define how to generate file1.o from file1.cpp
  - g++ -c file1.cpp

>> makefile is created in ./061_multifile_comp folder
- touch math_stuff.cpp >> changes the timestamp of the file
- if it exist
- make detects it as a change
- it will recompile just that part
*/