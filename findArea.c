#include<stdio.h>

main(){
    float area,R,B,H;
    printf("Enter the Radius for find the area of Circle\n");
    scanf("%f",&R);
    area = 3.14 * R * R;
    printf("The Area of Circle is-:%6.2f\n ",area);
    printf("Enter the Base & Height for find the Area of Tringle\n");
    scanf("%f%f",&B,&H);
    area = 0.5 * B * H;
    printf("The Area of Tringle is-:%6.2f\n ",area);
    return 0;
}