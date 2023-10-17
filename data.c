#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>

int main() {
         int i, fd;
         struct {
         int train_num;
         int ticket_count;
          } dbs[3];

         for (i=0; i<3; i++) {
            dbs[i].train_num = i+1;
            dbs[i].ticket_count = 0;
            }
         // Writing all 3 records to record.txt file
         fd = open("record.txt", O_RDWR);
         write(fd, dbs, sizeof(dbs));
}
