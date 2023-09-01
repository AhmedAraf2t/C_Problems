/****************************************************/
/****************************************************/
/* Author       : Ahmed Yasser Arafat El-Shinnawi   */
/* Created at   : 1/9/2023                          */
/* Description  : Write a C program to input length */
/*                and width of a rectangle and find */
/*                area of the given rectangle. How  */
/*                to calculate area of a rectangle  */
/*                in C programming. Logic to find   */
/*                area of a rectangle whose length  */
/*                and width are given in            */
/*                C programming.                    */
/****************************************************/
/****************************************************/
/* Example                                          */
/*    -Input:                                       */
/*        Enter length: 5                           */
/*        Enter width : 10                          */
/*    -Output:                                      */
/*        Area of rectangle = 50 sq. units          */
/****************************************************/
/****************************************************/

#include <stdio.h>

int main()
{
    // Declare variables to store the length and width of the rectangle
    unsigned int len = 0; // Initialize length as 0
    unsigned int wid = 0; // Initialize width as 0

    // Prompt the user to enter the length and width of the rectangle
    printf("Enter Length: ");
    scanf("%d", &len);    // Read the length value from user input
    printf("Enter Width : ");
    scanf("%d", &wid);    // Read the width value from user input

    // Calculate and print the area of the rectangle
    printf("The area of rectangle = %d * %d = %d sq. units", len, wid, len * wid);

    return 0; // Indicate successful program execution
}
