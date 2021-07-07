#include<stdio.h>
#include<stdlib.h>
//create a structure
struct student
{
    char name[50];
    int age;
    float percentage;
};
//creating pointer variable for structure
struct student* info = NULL;
int main()
{
    //assigning memory to struct variable
    info=(struct student*)malloc(sizeof(struct student));
    //assigning value to age variable of info using arrow operator
    info->age=18;
    //printing the assigned value to variable
    printf("%d",info->age);
    return 0;
}