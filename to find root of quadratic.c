/*
student Name:Salav Thapa
subject:Programing fundamental
Roll No:
Program:To find root of quadratic
Lab Sheet No:5
Date:2073-08-8
*/

#include<stdio.h>
#include<math.h>
int main(){
    float x1=0,x2=0,a,b,c,dis=0;
    printf("enter the first number: \n");
    scanf("%f",&a);
    printf("enter the second number: \n");
    scanf("%f",&b);
    printf("enter the third number: \n");
    scanf("%f",&c);

    dis=(b*b)-(4*a*c);
    printf("%f\n",dis);

    x1=(-b+pow(dis,0.5))/(2*a);

    x2=(-b-pow(dis,0.5))/(2*a);
    printf("the fist quadratic equation is: %f\n" , x1);
    printf("the second quadratic equation is :%f\n", x2);
    return 0;
}











