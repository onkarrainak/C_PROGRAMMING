#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the number A,B,C\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        if (b>=c)
        {
            printf("The Dscending Order is %d,%d,%d\n",a,b,c);
            printf("The Aescending Order is %d,%d,%d\n",c,b,a);
        }
        else
        {
            printf("The Ascending Order is %d,%d,%d\n",a,c,b);
            printf("The Descending Order is %d,%d,%d\n",b,c,a);            
        }
    }else if (b>=a && b>=c)
    {
        if (a>=c)
        {
            printf("The Ascending Order is %d,%d,%d\n",b,a,c);
            printf("The Descending Order is %d,%d,%d\n",c,a,b);
        }
        else
        {
            printf("The Ascending Order is %d,%d,%d\n",b,c,a);
            printf("The Descending Order is %d,%d,%d\n",a,c,b);
        }
    }else if (c>=a && c>=b)
    {
        if (a>=c)
        {
            printf("The Ascending Order is %d,%d,%d\n",c,a,b);
            printf("The Descending Order is %d,%d,%d\n",b,a,c);
        }
        else
        {
            printf("The Ascending Order is %d,%d,%d\n",c,b,a);
            printf("The Descending Order is %d,%d,%d\n",a,b,c);
        }
    } 
    return 0;
}