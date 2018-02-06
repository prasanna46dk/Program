#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
  int arr[argc];
  int i, key, j;
  for (i = 0; i < argc; i++)
    arr[i]=atoi(argv[i]);
  
  for (j = 1; j < argc; j++)
  {
    key = arr[j];
    i = j - 1;
    while (i >= 0 && arr[i] < key)
    {
      arr[i+1] = arr[i];
      i -= 1;
    }
    arr[i+1] = key;
  }
  
 for (i = 0; i < argc; i++)
   printf("%d ",arr[i]);
 printf("\n");
 return 0; 
}
