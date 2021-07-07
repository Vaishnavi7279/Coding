//PPL LAB EXAM QUESTION:3 19th January//
#include<stdio.h>
#include<stdlib.h>
//creating a structure
struct student_record
{
    char name[50];
    int age,semester;
}student[100];
int main()
{
    int size,input;
    printf("Enter the number of students for which the data has to be entered: ");
    scanf("%d",&size);
    for(int i=0 ; i<size ; i++)
       {
           printf("___STUDENT RECORD: %d___\n",i);
           printf("Enter name: ");
           scanf("%s",&student[i].name);
           printf("Enter age: ");
           scanf("%d",&student[i].age);
           printf("Enter semester: ");
           scanf("%d",&student[i].semester);
       }
    printf("Enter the serial number of student to display its record\nEnter 100 to exit\nEnter 101 to display all records\nEnter the input: ");
    scanf("%d",&input);
    for(int i=0 ; i<size ; i++)
       {
           if(input==100)
             exit(0);
           else if(input==101)
             {
                printf("The entered records are:\n");
                for(int i=0 ; i<size ; i++)
                   {
                      printf("___STUDENT RECORD: %d___\n",i);
                      printf("Name: %s\n",student[i].name);
                      printf("Age: %d\n",student[i].age);
                      printf("Semester: %d\n",&student[i].semester);
                   }
             }
           else if(input==i)
             {
                printf("___STUDENT RECORD: %d___\n",i);
                printf("Name: %s\n",student[i].name);
                printf("Age: %d\n",student[i].age);
                printf("Semester: %d\n",student[i].semester);
             }
       }
    
    return 0;
}