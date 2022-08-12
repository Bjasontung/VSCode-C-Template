#include <stdio.h>

int main(){
  int a[4]={1,2,3,1};
  int temp = 0;
  int max = 0;

  for(int i=0; i<4; i++){
    for(int j=1; j<4; j++){
      if(a[j] > a[j-1]){
         temp = a[j-1]; 
         a[j-1] = a[j];
         a[j] = temp;
      }
    }
  }

  max = a[0] + a[1];
  printf("%d",max);
}