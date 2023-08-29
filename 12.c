#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("Error\n");
		return 1;
	}
	int fd=open(argv[1],O_RDONLY);
        //int fd=open(argv[1],O_WRONLY);
	//int fd=open(argv[1],O_RDWR);
	int accessMode;
	if(fd==-1)
	{
		printf("Error opening file\n");
		return 1;
	}
	int flag=fcntl(fd,F_GETFL);
	accessMode=flag & O_ACCMODE;
	if(flag==-1)
	{
		printf("Error getting file flags\n'");
		close(fd);
		return 1;
	}
	if(accessMode==O_RDONLY)
	{
		printf("File is opened in read-only mode\n");
	}
	else if(accessMode==O_WRONLY)
	{
		printf("File is opened in write-only mode\n");
	}
	else if(accessMode==O_RDWR)
	{
		printf("File is opened in read-write mode\n");
	}
	close(fd);
	return 0;
}


