/*
============================================================================
Name :24.c
Author : Ankita Agrawal
Description : 24. Write a program to create an orphan process
Date: 8th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    // Create a child process
    int pid = fork();

    if (pid > 0)
        printf("in parent process");

    else if (pid == 0)
    {
        sleep(2);
        printf("in child process");
    }
    sleep(5);
    return 0;
}
