#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

int main(int argc, char *argv[])
{
struct stat s;

if(argc!=2)
{
printf("Error\n");
return -1;
}
if(stat(argv[1], &s)==-1)
{
printf("stat\n"); return -1;
}
//int fd-open(argv[1], O_RDONLY);

stat(argv[1], &s);
printf("a.inode: %ld\n", s.st_ino); 
printf("b.number of hard Links: %lu\n", s.st_nlink);
printf("c.uid: %d\n", s.st_uid);
printf("d.gid: %d\n", s.st_gid);
printf("e.size %ld\n", s.st_size);
printf("f.block size: %ld\n", s.st_blksize);
printf("g.number of blocks: %ld\n", s.st_blocks); 
printf("h.time of last access: %s", ctime(&s.st_atime));
printf("i.time of last modification: %s", ctime(&s.st_mtime));
printf("j.time of last change : %s", ctime(&s.st_ctime));

return 0;
}
