#include<stdio.h>
#include<conio.h>
int main(){
    int num,newn,i,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("The number is Entered\n");
    for (i = 1; i <= num; i++)
    {
        scanf("%d",&newn);
        sum = sum +newn;
    }
    printf("The sum of given number is %d",sum);    
    return 0;
}