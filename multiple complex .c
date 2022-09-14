//
//  main.c
//  multiple complex number
//
//  Created by Naresh Guptha on 14/09/22.
//

#include <stdio.h>



#include<stdio.h>


struct complex
{
    float real;
    float imaginary;
};


struct complex multiply(struct complex a, struct complex b);


int main()
{
   
    struct complex cnum1, cnum2, mul;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f", &cnum1.real, &cnum1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f", &cnum2.real, &cnum2.imaginary);

    mul = multiply(cnum1, cnum2);

    printf("PRODUCT = %0.2f + i %0.2f", mul.real, mul.imaginary);

    return 0;
}


struct complex multiply(struct complex a, struct complex b)
{
    struct complex m;

    m.real = a.real * b.real - a.imaginary * b.imaginary;
    m.imaginary = a.real * b.imaginary + b.real * a.imaginary;

    return m;
}
