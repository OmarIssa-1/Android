#include<stdio.h>
#include<time.h>
#include<errno.h>

int main(){
  struct timespace new_time;
new_time.tv_sec = 174704400;
new_time.tv_nsec = 0;

if(clock_settime(CLOCK_REALTIME, &new_time) == -1){
perror("Clock_settime failed!");
return 1;
}
printf("System time successfully updated!\n");
return 0;
}
  
