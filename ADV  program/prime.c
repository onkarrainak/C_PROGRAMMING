#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for (i =2 ; i <=n/2; i++)
    {
        if (n%i==0)
        {
            printf("The number is not Prime");
            exit(0);
        }   
    }    
    printf("The number is Prime");
    return 0;
}