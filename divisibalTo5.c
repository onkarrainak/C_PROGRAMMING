#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter the number=");
    scanf("%d",&num);
    if (num%5==0)
    {
        printf("The %d is Divisibal by 5",num);
    }
    else
    {
        printf("The %d is not divisibal by 5",num);
    }     
    return 0;
}