#include<stdio.h>

int main(){
    int *p_start;
    int *p_end;
    int num[5]={1,2,3,4,5};
    int x=sizeof(num)/sizeof(num[0]);
    p_start=num;
    p_end=&num[x-1];
    while(p_start<p_end){
        int a=*p_start;
        int b=*p_end;
        *p_start++=b;
        *p_end--=a;
    }
    p_start=num;
    p_end=&num[x-1];
    while(p_start<=p_end){
        printf("%d\t",*p_start++);
    }
}
