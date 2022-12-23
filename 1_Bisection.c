#include<stdio.h>
#include<math.h>
float f(float a)
{
    return (a*a*a) - (5*a) + 1;
}

int main()
{
    float a, b, x, tol;
   
    while(1)
    {
    printf("Enter a and b \n");
    scanf("%f%f", &a, &b);
    
     if(f(a) * f(b) < 0)
       {  printf("Allowed  \n");    break;   }
     else
          printf("Inavlid...Enter again\n");
    } 
    printf("Enter allowed error : ");
    scanf("%f", &tol);
  
    int it = 0;
   
   while(1)
   {
       it++;
       x = (a+b)/2;
       if(fabs(f(x)) <=  tol)
       {
           printf("After iteratio %d, solution is %f\n", it, x);
           break;
       }
       
           printf("After iteratio %d, f(%f) : %f\n", x, f(x));
       
       if(f(a) * f(x) < 0)
          b = x;
       else
          a = x;
          
   }
}