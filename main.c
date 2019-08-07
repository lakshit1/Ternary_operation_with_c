#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Show ternary opration \n");
    printf("Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Values are a=%d, b=%d, c=%d \n", a, b, c);
    int d = (a > b ? ((a > c) ? a : c) : ((b > c) ? b : c));
    printf("Greater number is %d \n", d);
    getch();
}