
#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter the values of a and b:");
  scanf("%d %d",&a,&b);
  int *p,*q;
  p=&a;
  q=&b;
  c=*p+*q;
  printf("the sum of the two pointer variables is:%d\n",c);
  return 0;
}