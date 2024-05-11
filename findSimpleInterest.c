#include<stdio.h>
main(){
    float SI,P,N,R;
    printf("Enter the values of P,N,R\n");
    scanf("%f%f%f",&P,&N,&R);
    SI = (P*N*R)/100;
    printf("The Simple Interest is -:%f",SI);    
    return 0;
}