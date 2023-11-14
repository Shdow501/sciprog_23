#include<stdio.h>

int gcd_iteration(int a,int b){
  int temp;
  while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}

int gcd_recursive(int a, int b){
  if (b==0){
    return a;
  }
  else{
    return gcd_recursive(b,a%b);
  }
}

int main(void){
  int a=5;
  int b=25;
 
  int ans_r = gcd_recursive(a,b);
int ans_i = gcd_iteration(a,b);
  printf("Using iteration %d\n",ans_i);
  printf("using recursion %d\n",ans_r);
  return 0;
}
