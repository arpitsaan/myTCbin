/*9.	Input a string and check if the inputted string is a palindrome or not*/



#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int len,i,j;
char a[100];
int ispalin;
clrscr();

printf("Enter a string:" );
scanf("%100s",a);

len=strlen(a);
ispalin=1;
for(i=0,j=len-1;i<len;i++,j--)
{
	if(a[i]!=a[j])
	{
		ispalin=0;
		break;
	}
	else
	continue;

}
if(ispalin==1)
{
printf("\n\nThe string %s is a palindrome!!",a);
}

else
{
	printf("\n\nThe string %s is NOT a palindrome!!",a);
}

getch();

}