#include "../astring.h"

int main(int argc, char *args[])
{
  int wc = 0;
  char *str = "Anubhav Sain is awesome. Waht do you say? Yeah you are right my brother  ";
  char *sep = " ";
  wc = wount(str, sep);
  printf("Words in '%s' = %d\n", str, wc);
  if(argc == 2){
    wc = wount(args[1], sep);
    printf("Words in '%s' = %d.\n", args[1], wc);
  }
  return 0;
}
