CPPFLAGS = -g3

output: main.o a.o b.o
	g++ -o output main.o a.o b.o

main_1.o: main_1.cpp
	g++ -c -o main.o main.cpp

a.o: a.cpp
	g++ -c -o a.o a.cpp

b.o: b.cpp
	g++ -c -o b.o b.cpp

.PHONY:

clean:
	$(RM) output main.o a.o b.o

