CPPFLAGS = -g3

buaa: main.o a.o b.o
	g++ -o buaa main.o a.o b.o

main_1.o: main_1.cpp
	g++ -c -o main.o main.cpp

a.o: a.cpp
	g++ -c -o a.o a.cpp

b.o: b.cpp
	g++ -c -o b.o b.cpp

.PHONY:

clean:
	$(RM) buaa main.o a.o b.o

