#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(void)
{
        struct flock lock;
        int fd;
        fd=open("db", O_RDWR);
        lock.l_type=F_WRLCK;
        lock.l_whence=SEEK_SET;
        lock.l_start=0;
        lock.l_len=0;
        lock.l_pid=getpid();
        printf("Before entering into critical section\n");
        fcntl(fd, F_SETLKW , &lock);
        printf("Inside the critical section\n");
        printf("Enter to unlock\n");
        getchar();
        printf("UNLOCKED\n");
        lock.l_type=F_UNLCK;
        fcntl(fd,F_SETLK,&lock);
        printf("finish\n");
}

