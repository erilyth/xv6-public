#include "types.h"
#include "user.h"
#include "stat.h"

int
main(int argc, char *argv[])
{
  //struct rtcdate r;
  //if (date(&r)) {
   // printf(2, "date failed\n");
  //  exit();
  //}
  int a=10;
  int b=100;
  //int newPriority=30;
  printf(2,"%d %d\n", a, b);
  //int t=set_priority(&newPriority);
  //forktest();
  //int i=0;
  //while(i<10000000){
  //	i++;
  //}
  int p1=fork();
  if(p1==0){
  	int cc=0;
	while(cc<1000000)
		cc++;
	exit();
  }
  /*int p2=fork();
  if(p2==0){
  	int ccc=0;
	while(ccc<1000000)
		ccc++;
	exit();
  }
  wait();*/
  wait();
  //sleep(100);
  waitx(&a,&b);
  printf(1,"%d %d YE?\n", a, b);
  //printf(2,"%d OLD PRIO", t);
  exit();
}
