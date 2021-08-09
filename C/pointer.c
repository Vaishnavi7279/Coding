//hackerrank problem to work on pointers via function
#include <stdio.h>
//function for updating the values
void update(int *a,int *b) {
    // Complete this function 
    (*a)=(*a)+(*b);
    (*b)=(*a)-(*b);
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;  
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}