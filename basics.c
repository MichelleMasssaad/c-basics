#include <stdio.h>
#include <stdbool.h>
int main ()
{
    int age =18;
    float height=1.57; //float 4 bytes(32 precision) 6-7 digits %f
    char name []="Bro";

    int grades [] = {19, 15, 16};

    char av_grade [] = "B";
    double d = 3.141592653589793; //double 8 bytes(64 bits precision) 15-16 digits %f
    char f =100; //between -128 to +127
    unsigned char g = 255; //between 0 to +255 %d or %c
    short int h=32767; // between -32 768 to +32 767                             
    bool e =true;
    unsigned short int i =65535; // between 0 to 65 535
    unsigned int k=4294967295;

    const float PI= 3.14159;

    printf("%u\n",k);

    printf("%d\n",e);


    printf("Hello %s\n ",name);

    printf("You are  %d years old",age);
    printf("Your best grade is %d" ,grades[0]);
    printf("You're average grade is %s\n " , av_grade);
    printf("You're height is %f\n" , height);

    printf("the pi number is %lf\n",d);
    printf("the pi number is %0.15lf\n",d);
    printf("%d\n",f);
    printf("%c\n",f);
    printf("%f\n",PI);


    return 0;
}


