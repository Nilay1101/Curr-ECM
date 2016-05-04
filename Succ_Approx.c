#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int user_power,i=0,cnt=0,flag=0;
int coef[10]={0};
float x1=0,t=0;
float x2=0;

void main()
{

    clrscr();
    printf("\nINTIAL X1");
    scanf("%f",&x2);

    do
    {
            cnt++;
            x1=x2;
            x2=(2-(log10(x1)));
            printf("\n %d         %.3f  %.3f ",cnt,x1,x2);

    }while((fabs(x2 - x1))>=0.0001);
    printf("\n\t THE ROOT OF EQUATION IS %f",x1);
    getch();
}