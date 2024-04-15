#include<stdio.h>
#include<conio.h>
int main(){
    int temp,rem,sum=0,num;
    printf("Enter the number =");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        rem=num%10;
        sum =sum+rem*rem*rem;
        num =num /10;
   }
    if (temp==sum) 
    {
        printf("The %d is Armstorng ",temp);
    }else
    {
        printf("The %d is not Armstorng ",temp);
    }
    return 0;
}