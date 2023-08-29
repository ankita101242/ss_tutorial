#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[] )
{
	int fd;
	char buf[10];
	fd=open("file10", O_CREAT | O_RDWR, 0744);
	write(fd,"HELLOHELLO",10);
	lseek(fd,10L,SEEK_CUR);
	write(fd,"HELLOHELLO",10);
	close(fd);
}

