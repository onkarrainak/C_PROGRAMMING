#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number-:");
    scanf("%d",&num);
    // This is Linear time.
    // for (int i = 1; i <= num; i++)
    // {
    //     sum +=i; 
    // }

    //this is constant time.
    sum = (num * num + num)/2;
    printf("THE sum of first %d natural numbers is %d\n",num,sum);
    return 0;
}