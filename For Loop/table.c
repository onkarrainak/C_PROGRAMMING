#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,mul;
    printf("Enter the number ");
    scanf("%d",&num);
    for ( i = 1;i < 10; i++)
    {
        mul=i*num;
        printf("%d * %d = %d\n",num,i,mul);
    }
    
    return 0;
}