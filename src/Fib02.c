/*
  2.斐波那契数列的普通解法
*/
#include <stdio.h>

int main(){
  int num1=1,num2=1;
  int num=0;
  int n=0;

  printf("Please scanf it\n");
  scanf("%d",&n);

  for(int i=2; i<n; i++)
  {
    num = num1 + num2;
    num1 = num2;
    num2 = num;
  }

  printf("%d\n",num);
}