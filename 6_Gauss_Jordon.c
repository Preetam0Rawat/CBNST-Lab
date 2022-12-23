#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the order of the matrix = ");
    scanf("%d" , &n);
    
    float arr[n][n+1];
    
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n+1 ; j++)
        {
            scanf("%f" , &arr[i][j]);
        }
    }

    // Creating diagnol matrix or Row echlion form
    for(int i = 0  ; i < n ; i++)
    {
        for(int j = 0 ; j < n +1 ; j++)
        {
            if(i != j){
                float ratio = arr[j][i]/arr[i][i];
                for(int k = 0 ; k < n+1 ; k++){
                    arr[j][k] = arr[j][k] - ratio*(arr[i][k]);  
                }
            }
        }
    }
    
    
    printf("\nThe row echelon form of given matrix = \n");
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n+1 ; j++){
            printf("%0.2f ", arr[i][j]);
        }
        printf(" \n");
    }
    
    printf("\nSolution is :");
    for(int i= 0; i < n; i++)
    {
       
            printf("%0.2f   ", arr[i][n]/arr[i][i]);
    }
    
    
}