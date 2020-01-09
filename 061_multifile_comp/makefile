# you can name the executable with -o flag
math: math_stuff.o math_utils.o
	g++ math_stuff.o math_utils.o -o math

# -c flag creates the object file
math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

# remove any files that need cleaned up
# run it >> make clean
clean:
	rm *.o math

# run makefile >> make