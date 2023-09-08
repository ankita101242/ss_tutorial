/*
============================================================================
Name : 5.c
Author : Ankita Agrawal
Description : 5. Write a program to create five new files with infinite loop. Execute the program in the background 
and check the file descriptor table at /proc/pid/fd.
Date: 8th Sept, 2023.
============================================================================
*/
 
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd1, fd2, fd3, fd4, fd5;
	fd1=open("file1.txt",O_CREAT | O_RDWR);
	fd2=open("file2.txt",O_CREAT | O_RDWR);
	fd3=open("file3.txt",O_CREAT | O_RDWR);
	fd4=open("file4.txt",O_CREAT | O_RDWR);
	fd5=open("file5.txt",O_CREAT | O_RDWR);
	printf("fd1=%d\n",fd1);
	printf("fd2=%d\n",fd2);
	printf("fd3=%d\n",fd3);
	printf("fd4=%d\n",fd4);
	printf("fd5=%d\n",fd5);
	for(;;);
}
