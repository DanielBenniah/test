#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (int argc, char** argv) {
	printf ("Forking..\n");
	pid_t pid = fork();
	int x = 5;
	printf ("Forked!!\n");
	printf ("pid = %d\n", (int)pid);
	if (pid == 0) {
		//printf ("In child process..\n");
		//execlp ("ps", "ps", NULL);
		//printf ("After exec process..\n");
		x = 20;
		printf ("In child x = %d\n", x);
	} else {
		//printf ("In parent process\n");
		wait(NULL);
		printf ("x = %d\n", x);
	}
}
