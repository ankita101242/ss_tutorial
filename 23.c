/*
============================================================================
Name : 23.c
Author : Ankita Agrawal
Description : 23. Write a program to create a Zombie state of the running program
Date: 8th Sept, 2023.
============================================================================
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
    // fork() creates child process identical to parent
    int pid = fork();
    // if pid is greater than 0 than it is parent process
    // if pid is 0 then it is child process
    // if pid is -ve , it means fork() failed to create child process

    // Parent process
    if (pid > 0)
    {
	    printf("Parent process id is %d\n",pid);
	    printf("Parent process going to sleep\n");
	    sleep(20);
	    printf("parent process wakes up \n");
    }
    // Child process
    else
    {
	printf("Child process id is %d\n",pid);
	printf("Process is in zombie state\n");
    }

    return 0;
}


