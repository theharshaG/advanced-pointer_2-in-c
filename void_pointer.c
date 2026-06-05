#include<stdio.h> 
int main()
{
  int x = 100; 
  void *ptr = &x; 
  printf("%d", *(int*)ptr); 
  return 0;
}
