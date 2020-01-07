/*
Input and Output streams
- from/to console
- from/to files

Console
cin >>
cout <<
type sth with keyboard >> that goes to a variable (into the program)... >> we can output it to the console
hello vs olleh
from the keyboard >> into the input stream
the stream does not go directly to the program
goes into the memory first, to the buffer (collection container thing)
once buffer is ready to go >> sends it to the running program
...
in context of C++ application >>
type your name into the console
the stream delivers the characters into the buffer
the buffer is ready to be cleared when we hit enter in the console
...
This concept can be extended to files

Files
cin is an object of the istream class
we can create our own custom objects in the ifstream (e.g input)
we can use input like cin but associate it with a file
ofstream >> output
input >> var (variable)
output << user
user is a file...

You can input/output with files like with cin/cout with the console...
*/