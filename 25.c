/*
============================================================================
Name :  25.c
Author : Ankita Agrawal
Description : 25. Write a program to create three child processes. The parent should wait for a particular child (use 
waitpid system call).
Date: 8th Sept, 2023.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){
pid_t p;
printf("before fork\n");
p=fork();

if(p==0){
printf("I am chlid1 pid %d\n", getpid());
printf("My chlid1 parentid is %d\n", getppid());

}

else{
pid_t q;
printf("Inside first in parent\n");
q=fork();
if(q==0){
printf("I am chlid2 pid is %d\n", getpid());
printf("I am chlid2 parent pid is %d\n", getppid());
}
else{
pid_t r;
printf("Inside second in parent\n");
r=fork();
if(r==0){
        sleep(10);
printf("I am third chlid is %d\n", getpid());
printf("I am thirdchlid parent is %d\n", getppid());
printf("My thirdchlid is completed\n");
}
else{
        waitpid(r,WIFEXITED(2), WCONTINUED);
printf("I am parent of all %d\n", getpid());
}

}


}
}
