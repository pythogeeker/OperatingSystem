//DEFUNCT MEANS ZOMBIE 
// Zombie process is a process that has terminated, but whose parent has not yet waited for it. So parent's parent will become parent of this process 
// also remember if parent process dies before child process then init process (process id = 1) becomes the parent of the executing child process.

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main()
{
int fd;
if((fd=fork())<0)
{
printf("error in creating child");
exit(1);
}
if(fd==0)
kill(getpid(),SIGKILL);
else
sleep(2);
system("ps -f");
}
