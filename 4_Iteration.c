#include<stdio.h>
#include<math.h>
float f(float a)
{
    return pow(a,3) + pow(a,2) - 1;
}

float e(float a)
{
    return 1/pow((a + 1), (0.5));
}

float diff(float a)
{
    return 1/2 * pow((a + 1),(3/2));
}

int main()
{
    float x, x0, tol;
while(1)
 {
    printf("Enter Random value  : ");
    scanf("%f", &x0);

    if(fabs(diff(x0)) > 1)
      printf("Invalid!!!! Enter again\n");
    else
      break;
 }
    printf("Enter allowed error : ");
    scanf("%f", &tol);

  
    int it = 0;
   
   while(1)
   {
       it++;
       x = e(x0);
       if(fabs(f(x)) <=  tol)
       {
           printf("After iteration %d, solution is %f\n", it, x);
           break;
       }
       
           printf("After iteratio %d, f(%f) : %f\n", x, f(x));
       
      x0 = x;
          
   }
}