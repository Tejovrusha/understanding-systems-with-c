#include<stdio.h>
#include<stdint.h>

#define LED 0x1
#define FAN 0x2
#define TV 0x4
#define SENSOR 0x8

void print_status(uint8_t x){
    //led status
    if(x & LED){
        printf("LED is ON\n");
    }
    else{
        printf("LED is OFF\n");
    }
    //fan status
    if(x & FAN){
        printf("FAN is ON\n");
    }
    else{
        printf("FAN is OFF\n");
    }
    //tv status
    if(x & TV){
        printf("TV is ON\n");
    }
    else{
        printf("TV is OFF\n");
    }
    //sensor status
    if(x & SENSOR){
        printf("SENSOR is ON\n");
    }
    else{
        printf("SENSOR is OFF\n");
    }
}

int main(){
    uint8_t reg=0;
    printf("INITIALLY:\n");
    print_status(reg);

    printf("\nOPERATION SET 1:\n");
    reg|= LED;      //set
    reg^= FAN;      //toggle
    print_status(reg);
    
    printf("\nOPERATION SET 2:\n");
    reg&= ~FAN;     //clear
    reg|= TV;       //set
    reg^= SENSOR;   //toggle
    print_status(reg);
    
    printf("\nOPERATION SET 3:\n");
    reg=0xff;     //set all
    print_status(reg);
    
    printf("\nOPERATION SET 4:\n");
    reg=0;      //clear all
    print_status(reg); 
}
