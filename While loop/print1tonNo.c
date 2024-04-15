#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,num;
    printf("Enter the num");
    scanf("%d",&num);
    while (i<=num)
    {
        printf("%d\t",i);
        i++;
    }
    return 0;
}