#include<stdio.h>
#include<conio.h>
main(){
    int num,Square,Cube;
    printf("Enter the number = ");
    scanf("%d",&num);
    Square = num*num;
    Cube = num*num*num;
    printf("The Square is %d and Cube is %d of given number.",Square,Cube);    
    return 0;
}