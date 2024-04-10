#include<stdio.h>
#include<conio.h>
int main(){
    int i ,fact=1,n; 
    printf("Enter the number ");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of %d is = %d",n,fact);    
    return 0;
}