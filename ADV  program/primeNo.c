#include<stdio.h>
#include<conio.h>
int main(){
    int i,flag = 1,n,newn;
    printf("Enter the number ");
    scanf("%d",&n);
    for (newn =2 ; newn <= n; newn++)
    {
        flag=1;
        for (i = 2; i <=newn/2; i++)
        {
            if (newn%i ==0)
            {
                flag=0;
                break;
            }  
        }
        if (flag==1)
        {
            printf("%d\t",newn);
        }        
    }    
    return 0;
}