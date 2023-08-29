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
