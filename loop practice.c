#include <stdio.h>
//Q1 Write a program in C to display the first 10 natural numbers.
void main()
{
   
    for (int a; a=1; a<=10; a++)
    {
        printf("%d ", a)
    }
}



// Q2 Write a C program to find the sum of first 10 natural numbers.

void main()
{
    total = 0;
    
    for(int b; b = 1; b <=10; b++)
    {
        total = total + b;
    }
    printf(total);
}


// Q3 Write a program in C to display n terms of natural number and their sum.

void main()
{
    total = 0;

    for(int a,b; a=1; a<=b; a++);
    {
        total+=a;
    }
    printf(n,total);
}


//Q4 Write a program in C to read 10 numbers from keyboard and find their sum and average.

void main()
{
    total = 0;
    float average;
    printf("enter 10 numbers: \n");
    for(int a, b; a=1;a<=10; a++)
    {
            printf("number %d: ",a);
        scanf("%d",&b);
        total += b;
    }
    average=total/10.0;
    printf("total: %d\naverage is : %f\n",total,average);
}


// Q5 Write a program in C to display the cube of the number upto a given integer.

void main()
{
    
    for(int a, cube; a=1; a<=cube; a++)
    {
        printf("number : %d cubed number of %d is :%d \n",a,a,(a*a*a));
    }
}

// Q6 Write a program in C to display the multiplication table of a given integer (of 15).

void main()
{

    for(int a; int b = 15; a=1; a<=10; a++)
    {
        printf(a,b,a*b);
    }
}

// Q7 Write a program in C to display the pattern like right angle triangle using an asterisk.

void main()
{
    

    for(int a,b,rows; a=1; a<=rows; a++)
    {
        for(b=1; b<=a; b++)
            printf("*");
        printf("\n");
    }
}

//Q8 Write a program in C to display the pattern like right angle triangle with a number.

void main()
{
    

    for(int a,b,rows; a=1; a<=rows; a++)
    {
        for(b=1; b<=a; b++)
            printf(b);
        printf("\n");
    }
}