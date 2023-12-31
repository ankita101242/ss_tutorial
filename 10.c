/*
============================================================================
Name : 10.c
Author : Ankita Agrawal
Description : 10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10 
bytes (use lseek) and write again 10 bytes. 
                 a. check the return value of lseek
                 b. open the file with od and check the empty spaces in between the data.
Date: 8th Sept, 2023.
============================================================================
*/

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

