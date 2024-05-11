#include<stdio.h>

int main(){
    int num;
    printf("Enter the Nmuner");
    scanf("%d",&num);
    if (num>10)
    {
        printf("%d is Greater then 10",num);
    }else if (num<10)
    {
        printf("%d Less then 10",num);
    }
    else
    {
        printf("The Number is 10");
    }
    
    return 0;
}