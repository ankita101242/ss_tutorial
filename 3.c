/*
============================================================================
Name : 3.c
Author : Ankita Agrawal
Description : 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 8th Sept, 2023.
============================================================================
*/

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main (void){
	int fd;
	fd=creat("myfile",S_IRUSR | S_IWUSR);
	printf("fd=%d\n",fd);
}	
