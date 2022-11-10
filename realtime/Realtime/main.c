#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, pid;

  printf("My process ID is %d\n", getpid());

  for ( i = 0; i < 3; i++ ) {
    pid = fork();

    if ( pid != 0 ) {
      printf("I am the parent => PID = %d, child ID = %d\n", getpid(), pid);
}
    else {
      printf("I am the child  => PID = %d\n", getpid());

    }
  }
  while(1);

  return(0);
}
