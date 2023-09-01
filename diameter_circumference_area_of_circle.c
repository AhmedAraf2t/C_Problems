/********************************************************************************/
/********************************************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi                               */
/* Created at   : 1/9/2023                                                      */
/* Description  : Write a C program to input radius of a circle from user       */
/*                and find diameter , circumference and area of the circle.     */
/*                How to calculate, circumference and area of a circle whose    */
/*                radius is given by user in C programming. Logic to find       */
/*                diameter, circumference and area of a circle in C.            */
/********************************************************************************/
/********************************************************************************/
/* Example                                                                      */
/*    -Input:                                                                   */
/*        Enter radius: 10                                                      */
/*    -Output:                                                                  */
/*        Diameter = 20 units                                                   */
/*        Circumference = 62.79 units                                           */
/*        Area = 314 sq. units                                                  */
/********************************************************************************/
/********************************************************************************/

#include <stdio.h>

int main()
{
    float r = 0;                    // Declare a variable to store the radius of the circle
    printf("Enter radius: ");       // Prompt the user to enter the radius
    scanf("%f", &r);                // Read the radius from the user and store it in 'r' variable

    printf("Diameter = %.2f units\n", 2 * r); // Calculate and print the diameter of the circle (2 times the radius)

    printf("Circumference = %.2f units\n", 2 * 3.14 * r); // Calculate and print the circumference of the circle (2 * pi * radius)

    printf("Area = %.2f sq. units\n", 3.14 * r * r); // Calculate and print the area of the circle (pi * radius^2)

    return 0; // Indicate successful program execution
}
