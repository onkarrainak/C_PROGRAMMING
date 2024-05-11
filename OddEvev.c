#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter the number=");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The %d is Even",num);
    }
    else
    {
        printf("The %d is Odd ",num);
    }
    
    
    return 0;
}