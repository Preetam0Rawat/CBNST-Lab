#include<stdio.h>
#include<math.h>
float f(float a)
{
    return (3*a) - cos(a) - 1;
}

float diff(float a)
{
    return 3 + sin(a);
}

int main()
{
    float a, b, x, x0, tol;
   
    while(1)
    {
    printf("Enter a and b \n");
    scanf("%f%f", &a, &b);
    
     if(f(a) * f(b) < 0)
       {  printf("Allowed  \n");    break;   }
     else
          printf("Inavlid...Enter again\n");
    } 

    printf("Enter guessed value  : ");
    scanf("%f", &x0);

    printf("Enter allowed error : ");
    scanf("%f", &tol);

  
    int it = 0;
   
   while(1)
   {
       it++;
       x = x0 - f(x0) / diff(x0);
       if(fabs(f(x)) <=  tol)
       {
           printf("After iteration %d, solution is %f\n", it, x);
           break;
       }
       
           printf("After iteratio %d, f(%f) : %f\n", x, f(x));
       
      x0 = x;
          
   }
}