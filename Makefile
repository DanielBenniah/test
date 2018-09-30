
output: helloworld.o
	gcc helloworld.o -o helloworld

helloworld.o: helloworld.c header.h
	gcc -c helloworld.c

fork_test: fork_test.c
	gcc -o fork_test fork_test.c

clean:
	rm -f *.o helloworld fork_test
