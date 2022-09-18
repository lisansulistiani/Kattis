#include<stdio.h>
int main()
{
    float cost;
    int cases;
    float length,width;
    scanf("%f",&cost);
    scanf("%d",&cases);
    double area=0;
    while(cases--)
    {
        scanf("%f %f",&width,&length);
        area+=(width*length);
    }
    printf("%.7f\n",(area*cost));
    return 0;
}
