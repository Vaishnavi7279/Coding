//hackerrank problem
//determing the area of three triangles and arranging it in ascending order via herons formula
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;
int sort_by_area(triangle* tr, int n) 
{
	//Sort an array a of the length 
    int p,s;
    p=(tr->a+tr->b+tr->c)/2;
    s=sqrt(p*(p-tr->a)*(p-tr->b)*(p-tr->c));
    return s;
}
void swap(int *xp, int *yp) 
{ 
    int temp=*xp; 
    *xp=*yp; 
    *yp=temp; 
} 
// A function to implement bubble sort 
void bubbleSort(int s[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)      
    // Last i elements are already in place 
    for(j=0 ; j<n-i-1 ; j++) 
        if (s[j]>s[j+1]) 
            swap(&s[j], &s[j+1]); 
} 
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n*sizeof(triangle));
	for(int i=0 ; i<n ; i++) 
      {
		 scanf("%d %d %d", &tr[i].a, &tr[i].b, &tr[i].c);
	  }
    int s[n],s1[n];
    for(int i=0 ; i<n ; i++) 
      {
         s[i]=sort_by_area(tr, n);
         s1[i]=sort_by_area(tr, n);
	  }
    for(int i=0 ; i<n ; i++)
      {
          printf("%d",s[i]);
      }
    printf("\n");
	for(int i=0 ; i<n ; i++) 
      {
         if(s[i]==s1[i])
		 printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	  }
	return 0;
}