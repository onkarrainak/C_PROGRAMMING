#include<stdio.h>
main(){
    int num1,num2;
    printf("Enter the two number\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("The Largest number is %d ",num1);
    }
    else
        printf("The Largest number is %d ",num2);
    return 0;
}