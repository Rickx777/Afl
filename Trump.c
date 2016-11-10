#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>

void sighandler(int signo){

  
  if (signo = SIGUSR1){
    printf("My papa or mama's PID is: %d\n", getppid());
  }
    
  else if (signo = SIGINT){

  int fp = open( "./Signals.txt", O_CREAT | O_WRONLY | O_APPEND, 0644);

  char e[32] = "Program was stopped by SIGINT.";
  write( fp, e, sizeof(e));
  close(fp);

  exit(SIGINT);  
  }


}


void main(){
  
  signal(SIGINT, sighandler);
  
  while(1){
    printf("I am the PID: %d\n", getpid());
    sleep(1);
  }
  
}
