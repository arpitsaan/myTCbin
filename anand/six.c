/*
6.	Input a string and count the length of the string without using string function ‘strlen’
*/


#include<stdio.h>
#include<conio.h>
void main()
{
int len,i;
char a[100];
clrscr();
printf("Enter a string(less than 100 characters):" );
scanf("%100s",a);
len=0;
for(i=0;i<100;i++)
{
if(a[i]=='\0')
break;

len++;
}

printf("The length of the string is: %s characters",len);
getch();

}