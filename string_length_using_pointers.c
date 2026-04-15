#include<stdio.h>

int string_len(char *ptr){
    int count=0;
    while(*ptr++ != '\0'){
        count++;
    }
    return count;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int count=string_len(str);
    printf("Length of the string is: %d\n", count);
}
