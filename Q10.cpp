#include<stdio.h>

int main()
{
    int d ;
    int m;
    int y;

    printf("DD/MM/YYYY \n");

    printf("enter date ");
    scanf("%d",&d);
    printf("enter month ");
    scanf("%d",&m);
    printf("enter year ");
    scanf("%d",&y);

    printf("Day - %d , Month - %d, Year - %d",d,m,y);
    return 0;
}