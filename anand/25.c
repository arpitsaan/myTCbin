/*

25.	Write a program using structures to input student details . The details should be the name ,roll number and the branch.
Input data for 50 students.


*/


#include<stdio.h>
#include<conio.h>

struct student
{
   char name[50];
   int rollno;
   char branch[10];
};


void main()
{

int i;
struct student studetails[50];

printf("Enter the student details for 50 students:\n\n");


for(i=1;i<=50;i++)
{

	printf("\n\nEnter details for student %d :\n\n",i);
	printf("Enter name:\n");
	scanf("%s",&studetails[i].name);

	printf("Enter roll number:\n");
	scanf("%s",&studetails[i].rollno);

	printf("Enter branch:\n");
	scanf("%s",&studetails[i].branch);
}


getch();

}
