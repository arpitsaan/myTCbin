/*23.	Write a function to swap two numbers.*/



#include<stdio.h>
#include<conio.h>
#include<string.h>


void swapno(int &a,int &b)  //function to swap 2 numbers
{

int temp;
temp=a;
a=b;
b=temp;
}



void main()
{
int a,b;

void swapno(int &a1,int &b1);

clrscr();
printf("\nEnter numbers:");
printf("\nEnter a:   ");
scanf("%d",&a);

printf("\nEnter b:   ");
scanf("%d",&b);


printf("The values before swap: \na:   %d,  b:    %d",a,b);
swap(a,b); //call to the function
printf("The values after swapping the numbers are : \na:   %d,  b:    %d",a,b);

getch();

}