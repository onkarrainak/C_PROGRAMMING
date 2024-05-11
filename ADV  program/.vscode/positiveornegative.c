#include<stdio.h>
main(){
    int num;
    printf("Enter the two number ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("The number is Positive ");
    }
    else if (num<0)
    {
        printf("The Number is Negative");
    }
    else
        printf("The Number is 0");     
    return 0;
}