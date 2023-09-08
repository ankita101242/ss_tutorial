/*
============================================================================
Name : 6.c
Author : Ankita Agrawal
Description : 6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 8th Sept, 2023.
============================================================================
*/


#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{         char buffer[100];
          int char_read= read(STDIN_FILENO, buffer, 100);
          write(STDOUT_FILENO,buffer,char_read);
} 
