#include<stdio.h>
#include<conio.h>
int main(){
    int Rollno,m1,m2,m3,total;
    float avg;
    printf("Enetr the student Roll number=\n");
    scanf("%d",&Rollno);
    printf("Enter the Three subject marks\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    printf("The Total marks of The student is %d\n",total);
    printf("The average is %2f\n",avg);
    if (avg>=60)
    {
        printf("The grade id A\n");
    }
    else if ((avg>=50) && (avg<=60))
    {
        printf("The grade is B\n");   
    }
    else if ((avg>=40)&&(avg<=50))
    {
        printf("The grade is C\n");
    }
    else
    {
        printf("The grade is F\n");
    }
    return 0;
}