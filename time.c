#include "types.h"
#include "user.h"

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
  int newPriority=30;
  printf(2,"%d %d\n", a, b);
  int t=set_priority(&newPriority);
  waitx(&a,&b);
  printf(2,"%d %d YE?\n", a, b);
  printf(2,"%d OLD PRIO", t);
  exit();
}
