/*8.	Input a string and print the number of vowels present in the string.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int count;
clrscr();
printf("Enter a string(less than 100 characters):" );
scanf("%s",&a);


for(i=0;i<100;i++)
{

if(a[i]=='\0';
break;

if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
count++;


}


printf("The no. of vowels in %s is: %d.",a,count);
getch();
}