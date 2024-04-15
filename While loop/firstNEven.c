#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=2;
    printf("Enter the number ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\t",i);
        i=i+2;
    }
    return 0;
}
