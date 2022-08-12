//冒泡排序
#include <stdio.h>

int main(){
  int arr[10] = {3,5,7,2,9,0,6,1,8,4};
  int temp = 0;

  for(int i=0; i<10; i++){
    for(int j=1; j<10; j++){
      if(arr[j] < arr[j-1]){
        temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for(int i=0; i<10; i++){
    printf("%d,",arr[i]);
  }
  

}