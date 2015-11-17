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
  waitx(&a,&b);
  printf(2,"%d %d\n", a, b);
  // your code to print the time in any format you like...
  exit();
}
