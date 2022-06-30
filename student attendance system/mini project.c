#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
int number_present;
int number_absent;
};
void main()
{
struct student s[10];
int i,n;
printf("***************************************************************************\n");
printf("\t\t\tStudent Attendance System\n");
printf("***************************************************************************\n");
printf("\t\t\tEnter the data of the student\n\n");
printf("Enter the number of data entries:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the rollno:");
scanf("%d",&s[i].rollno);
printf("\n\nEnter the name:");
scanf("%s",&s[i].name);
printf("\n\nEnter the total days:");
scanf("%d",&s[i].number_present);
printf("\n\nEnter the absent days:");
scanf("%d",&s[i].number_absent);
}
printf("Data for student:\n\n");
for(i=0;i<n;i++)
{
printf("Rollno=%d\t",s[i].rollno);
printf("Name=%s\n\n",s[i].name);
printf("Total present day=%d\n\n",s[i].number_present);
printf("Total absent day=%d\n\n",s[i].number_absent);
}
getch();
}
