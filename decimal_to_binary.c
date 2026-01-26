//using recursion

#include<stdio.h>

void dec_to_bin(long long int x){
  if(x>1) dec_to_bin(x/2);
  printf("%lld",x%2);
}

void main(){
  long long int n;
  printf("Enter a decimal number: ");
  scanf("%lld",&n);
  printf("The decimal number %lld converted to Binary is ",n);
  dec_to_bin(n);
  printf("\n");
}
