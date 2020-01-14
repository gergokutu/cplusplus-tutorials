user: main.o user.o
	g++ main.o user.o -o user -std=c++11

main.o: main.cpp
	g++ -c main.cpp -std=c++11

user.o: user.cpp
	g++ -c user.cpp -std=c++11

clean:
	rm *.o user