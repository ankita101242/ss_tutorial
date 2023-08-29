#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[] )
{
	int fd;
	char buffer[200];
	int read_bytes;
	char *newline;
	fd=open(argv[1],O_RDONLY);

	if(fd==-1)
		printf("ERROR OPENING FILE\n");

	read_bytes=read(fd,buffer,200);
	if(read_bytes>0)
	{
		char *start=buffer;
		while((newline=strchr(start,'\n'))!=NULL)
		{
			*newline='\0';
			write(STDOUT_FILENO,start,strlen(start));
			write(STDOUT_FILENO,"\n",1);
			start=newline+1;
	       }
	}
	close(fd);
    return 0;
}
