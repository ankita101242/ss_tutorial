/*
============================================================================
Name : 20.c
Author : Ankita Agrawal
Description : 20. Find out the priority of your running program. Modify the priority with nice command.
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
	printf("The priority of the current process is = %d\n",getpriority(PRIO_PROCESS,getpid()));
        nice(6);
	printf("The modified priority =%d\n",getpriority(PRIO_PROCESS,getpid()));

	setpriority(PRIO_PROCESS,getpid(),7);
	printf("The modified priority =%d\n",getpriority(PRIO_PROCESS,getpid()));
}

