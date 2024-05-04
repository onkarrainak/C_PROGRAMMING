#include<stdio.h>
main(){
    int a,b,temp;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);
    printf("The number before Swap A=%d,B=%d",a,b);
    temp=a;
    a=b;
    temp=b;
    printf("The number after Swap A=%d,B=%d",a,b);
    return 0;
}