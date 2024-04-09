#include<stdio.h>
main(){
    int a,b,c;
    float d,h,g;
    printf("Enter the first number-:");
    scanf("%d",&a);
    printf("Enter the second number-:");
    scanf("%d",&b);
    printf("Enter the third number-:");
    scanf("%f",&d);
    printf("Enter the fourth number-:");
    scanf("%f",&h);
    printf("*********|||*|||***********\n");
    c = a + b;
    printf("********************");
    printf("\nThe Addition is=%d\n",c);
    c = a - b;
    printf("********************\n");
    printf("\nThe Subtraction is=%d\n",c);
    c = a * b;
    printf("********************\n");
    printf("\nThe Multiplication ds=%d\n",c);
    g = d / h;
    printf("********************\n");
    printf("\nThe Division is=%f\n",g);
    c = a % b;
    printf("********************\n");
    printf("\nThe Modulo division is=%d\n",c);

    return 0;
}