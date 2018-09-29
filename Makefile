
output: helloworld.o
	gcc helloworld.o -o helloworld

helloworld.o: helloworld.c header.h
	gcc -c helloworld.c 

clean:
	rm -f *.o helloworld
