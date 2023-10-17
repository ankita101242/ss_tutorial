/*
============================================================================
Name : 4.c
Author : Ankita Agrawal
Description : 4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 8th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	int fd1,fd2;
	fd1=open("file1",O_RDWR);
	fd2=open("file2",O_EXCL);
	printf("fd1=%d\n",fd1);
	printf("fd2=%d\n",fd2);

	close(fd1);
	close(fd2);

}

