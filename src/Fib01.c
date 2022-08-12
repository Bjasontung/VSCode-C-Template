/*
  1.使用数组实现斐波那契数列
*/
#include <stdio.h>

int main(){
  int target = 7;

  int fib[target];
  fib[0] = fib[1] = 1;
  for(int i=2; i<target; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }

  printf("%d\n",fib[target-1]);
}