#include<stdio.h>
#include<stdlib.h>

int main(){
  int c=0;
  int i = 200, n = 110;
  while (i >= n){
    c++;
    i = i-1;
    n = n+1;
  }
  printf("%d c value",c);
}
