school: main.o user.o teacher.o student.o
	g++ main.o user.o teacher.o student.o -o school -std=c++11

main.o: main.cpp
	g++ -c main.cpp -std=c++11

user.o: user.cpp
	g++ -c user.cpp -std=c++11

teacher.o: teacher.cpp
	g++ -c teacher.cpp -std=c++11

student.o: student.cpp
	g++ -c student.cpp -std=c++11

clean:
	rm *.o school