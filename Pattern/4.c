#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");       
    }
    return 0;
}