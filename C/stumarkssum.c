//HackerRank Problem
//Student Marks Sum
//You are given an array of integers,denoting the marks scored by students in a class.
//The alternating elements 0, 2, and 4 so on denote the marks of boys.
//Similarly, 1, 3, and 5 so on denote the marks of girls.
//Return the sum of marks on the basis of the gender given

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int total=0;
  if(gender=='g'||gender=='G')
    {
        for(int i=0 ; i<number_of_students ; i++)
           {
               if(i%2!=0)
                 total=marks[i]+total;
           }
    }
  else if(gender=='b'||gender=='B')
    {
        for(int i=0 ; i<number_of_students ; i++)
           {
               if(i==0||i%2==0)
                 total=marks[i]+total;
           }
    }
  return total; 
}

int main() 
{
    int number_of_students;
    char gender;
    int sum;  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int)); 
    for (int student = 0; student < number_of_students; student++) 
        scanf("%d", (marks + student));   
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    return 0;
}