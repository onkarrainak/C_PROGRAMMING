#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,choose;
    printf("***Choose Your Option***\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("********************************************\n");
    scanf("%d",&choose);
    printf("Enter the Two number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    switch(choose){
        case 1:
            c = a + b;
            printf("The addition is %d",c);
            break;
        case 2:
            c = a - b;
            printf("The subtraction is %d",c);
            break;
        case 3:
            c = a * b;
            printf("The multiplication is %d",c);
            break;
        case 4:
            c = a / b;
            printf("The Division is %d",c);
            break;
         
    }
    return 0;
}