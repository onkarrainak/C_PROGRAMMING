#include<stdio.h>
#include<conio.h>
int main(){
    int i,num;
    printf("Enter the number");
    scanf("%d",&num);
    i=num;
    do
    {
        printf("%d\t",i);
        i--;
    } while (i>=1);
    return 0;
}