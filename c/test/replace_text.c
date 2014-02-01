#include "../astring.h"

int main(int argc, char *args[])
{
  int i;
  if(argc != 5){
    printf("Usage: %s A B C D\n");
    printf("-----------------\n");
    printf("Where A is string to be modified.\n");
    printf("      B is one character that is to be replaced.\n");
    printf("      C is number of times to be expanded.\n");
    printf("      D is what it is to be repaced with.\n");
    printf("-------------------------------------------------\n");
    printf("Example: %s 'Expand mex' x 5 X\n");
    return -1;
  }
  printf("Entered string: %s\n", args[1]);
  printf("Expanded string: %s\n", expand_safe(args[1], args[2][0], str2int(args[3]), args[4][0]));
  return 0;
} 
