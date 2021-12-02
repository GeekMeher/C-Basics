#include <stdio.h>
#include <stdlib.h>

struct sample
{
  int data : 3;//bit field
};

typedef struct sample Sample;

int main ()
{
  Sample.data = 2;//works as 2 is in the range of mentioned bit field
  printf("%d\n",Sample.data);
  
  Sample.data = 4;//would give 2s complement as it is out of range
  printf("%d\n",Sample.data);
  
  return 0;
 }
  
