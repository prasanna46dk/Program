#include<stdio.h>
#include<math.h>

void PrintPair(int *arr, int length, int sum)
{
  int HashMap[1000] = {0}, i;
  for (i = 0; i < length; i++)
  {
    if (sum-arr[i] >= 0 && HashMap[sum-arr[i]] == 1)
      printf("Pair with Given sum is %d %d\n",sum-arr[i],arr[i]);
    else 
      HashMap[arr[i]] = 1;
  }
}

int main()
{
  int arr[]={1, 4, 45, 6, 10, 8};
  PrintPair(arr,6,16);
  return 0;
}
