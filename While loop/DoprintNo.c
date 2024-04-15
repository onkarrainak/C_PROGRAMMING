#include<stdio.h>
#include<conio.h>
int main(){
    int i,num;
    printf("Enter the number");
    scanf("%d",&num);
    i=1;
    do
    {
        printf("%d\t",i);
        i++;
    } while (i<=num);
    return 0;
}