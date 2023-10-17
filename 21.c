/*
============================================================================
Name :21.c
Author : Ankita Agrawal
Description : 21.Write a program, call fork and print the parent and child process id.

Date: 8th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/resource.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	if(!fork())
	{
		printf("Child process\n");
		printf("child process id:%d\n",getpid());

	}
	else
	{
	       printf("Parent process\n");
               printf("Parent process id:%d\n",getpid());
       }
      sleep(0);	
}	
