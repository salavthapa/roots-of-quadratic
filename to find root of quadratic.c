/*
student Name:Salav Thapa
subject:Programing fundamental
Roll No:
Program:To find root of quadratic
Lab Sheet No:5
Date:2073-08-8
*/

#include<stdio.h>
int main(){
    float x1,x2,a,b,c,dis;
    printf("enter the first number \n");
    scanf("%f",&a);
    printf("enter the second number \n");
    scanf("%f",&b);
    printf("enter the third number \n");
    scanf("%f",&c);
    dis=b*b-4*a*c;
    printf("%f",dis);
    x1=pow(dis,0.5)/2*a;
    x2=-pow(dis,0.5)/2*a;
    printf("the fist quadratic equation is \n %2f" , x1);
    printf("the second quadratic equation is %2f", x2);
    return 0;
}











