/*12.	Input a sentence and print the sentence backwards.*/



#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int len,j;
char a[100];

clrscr();

printf("Enter a sentence:" );
scanf("%100s",a);

len=strlen(a);
ispalin=1;

printf("\nThe reverse of the sentence is: \n\n");


for(j=len-1;j>0;j--)
{
	printf("%c",a[j]);	
}
getch();

}