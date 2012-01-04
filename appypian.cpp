#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
const double FACT = 1.0594;
char ch;
double freq=440;
clrscr();
printf("\nWelcome to piano ('z' to exit)\n\n");
/*for( ; i*=1.0594; )
{
sound(i);
delay(500);
nosound();
ch=getch();
if(ch == 'a')break;

}                  */


ch=getche();
while(ch!='z')
{
switch(ch)

{
case 'q':
sound(440 * pow(FACT,1));
break;

case 'w':
case 's':
sound(440 * pow(FACT,2));
break;

case 'e':
sound(440 * pow(FACT,3));
break;

case 'r':
case 'f':
sound(440 * pow(FACT,4));
break;

case 't':
sound(440 * pow(FACT,5));
break;

case 'y':
case 'h':
sound(440 * pow(FACT,6));
break;

case 'u':
case 'j':
sound(440 * pow(FACT,7));
break;

case 'i':
sound(440 * pow(FACT,8));
break;

case 'o':
case 'l':
sound(440 * pow(FACT,9));
break;

case 'p':
sound(440 * pow(FACT,10));
break;


case '[':
case '\'':
sound(440 * pow(FACT,11));
break;

case ']':
sound(440 * pow(FACT,12));
break;

case '\\':
sound(440 * pow(FACT,13));
break;

/*case 'a':
sound(440 * pow(FACT,14));
break;

case 's':
sound(440 * pow(FACT,15));
break;

case 'd':
sound(440 * pow(FACT,16));
break;

case 'f':
sound(440 * pow(FACT,17));
break;

case 'g':
sound(440 * pow(FACT,18));
break;
*/
default:
printf("Wrong key\n");
break;

}

delay(320);
nosound();
ch=getche();
printf("  ");

};

printf("\n\nExit");
delay(300);
}