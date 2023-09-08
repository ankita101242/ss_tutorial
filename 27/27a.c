/*
============================================================================
Name : 27a.c
Author : Ankita Agrawal
Description : 27. Write a program to execute ls -Rl by the following system calls
 a. execl 
Date: 8th Sept, 2023.
============================================================================
*/

#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void){
	execl("/bin/ls","ls","-Rl",NULL);
	perror("Return from execl() not expected");
	exit(EXIT_FAILURE);
}
