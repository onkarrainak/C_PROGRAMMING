#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number -:");
    hscanf("%d",&number);
    for (int i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",number,i,i*number);
    }
    return 0;
}