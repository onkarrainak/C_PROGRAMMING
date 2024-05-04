#include<stdio.h>
main(){
    int Roll_no,m1,m2,m3,total;
    float average;
    printf("Enter the Roll no of the student");
    scanf("%d",&Roll_no);
    printf("Entre the marks of m1,m2,m3\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    total = m1+m2+m3;
    average=total/3.0;
    printf("The Roll no of the student is %d\n",Roll_no);
    printf("The Marks of M1 is%d\n",m1);
    printf("The Marks of M2 is%d\n",m2);
    printf("The Marks of M3 is%d\n",m3);
    printf("The Total of marks  is%d\n",total);
    printf("The Average is%f\n",average);
    return 0;
}