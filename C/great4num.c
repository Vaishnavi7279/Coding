//hackerrank problem to find the greatest of four number using functions
#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int grt;
    if(a>b)
      {
          if(a>c)
            {
                if(a>d)
                  grt=a;
                else if (d>a) 
                  grt=d;
            }
          else if(c>a)
            {
                grt=c;
            }
      }
    else if(b>a)
      {
          if(b>c)
            {
                if(b>d)
                  grt=b;
                else if (d>a) 
                  grt=d;
            }
          else if(c>b)
            {
                grt=c;
            }
      }
    return grt;
}

int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);   
    return 0;
}