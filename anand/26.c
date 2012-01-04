/*

26.	Write a function which prints the details of the students in question no.25 in this particular manner.
<name> <roll no.> <branch>



*/


#include<stdio.h>
#include<conio.h>

struct student
{
   char name[50];
   int rollno;
   char branch[10];
};

//FUNCTION TO PRINT THE STUDENT DETAILS
void printstuddetails(struct student sdetails)
{

int i;
printf("STUDENT DETAILS ARE PRINTED: "
for(i=0;i<50;i++)
{	
	printf("\n\nNAME - %s",sdetails[i].name);
	printf("\nROLL NUMBER- %d",sdetails[i].rollnumber);
	printf("\nBRANCH- %s",sdetails.branch);
}


} 


void main()
{

int i;
struct student studetails[50];

printf("Enter the student details for 50 students:\n\n");


for(i=0;i<50;i++)
{

	printf("\n\nEnter details for student %d :\n\n",i+1);
	printf("Enter name:\n");
	scanf("%s",&studetails[i].name);

	printf("Enter roll number:\n");
	scanf("%s",&studetails[i].rollno);

	printf("Enter branch:\n");
	scanf("%s",&studetails[i].branch);
}


printstudetails(studetails);	//function call to print the student details
	
getch();


}
