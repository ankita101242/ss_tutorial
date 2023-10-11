#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
	int filedes[2];
	char buf[100];
	if(pipe(filedes)==-1)
	{
		errExit("Pipe");
	}
	write(filedes[1],"Hello ",6);
	read(filedes[0],buf,6);
	printf("%s",buf);
	return 0;
}
