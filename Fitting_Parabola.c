#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n;
    float x[10],y[10],p,q,h,a[10][10],c[10];
    printf("\nEnter the Value of n : ");
    scanf("%d",&n);
    printf("\nEnter the initial value of x : ");
    scanf("%f",&x[0]);
    printf("\nEnter the step size h for x : ");
    scanf("%f",&h);
    for(i=1;i<n;i++)
    {
        x[i]=x[i-1]+h;
    }
    printf("\nEnter the values of y : \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    p=x[0]-(h/2);
    q=x[n-1]+(h/2);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=(pow(q,(i+j+1))-pow(p,(i+j+1)))/(i+j+1);
        }
    }
    for(i=0;i<3;i++)
    {
        a[i][3]=0;
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                a[i][3]=a[i][3]+h*y[j];
            }
            else
            {
                a[i][3]=a[i][3]+h*pow(x[j],i)*y[j];
            }
        }
    }
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            if(i!=k)
            {
                for(j=k+1;j<4;j++)
                {
                    a[i][j]=a[i][j]-((a[i][k]*a[k][j])/a[k][k]);
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i][3]/a[i][i];
        printf("The value of c[%d] is : %f\n",i,c[i]);
    }
    printf("\nThe required second degree parabola is : \n");
    if(c[1]>0 && c[2]>0)
    {
        printf("y=%f+%fx+%fx^2\n",c[0],c[1],c[2]);
    }
    else if(c[1]<0 && c[2]<0)
    {
        printf("y=%f%fx%fx^2\n",c[0],c[1],c[2]);
    }
    else if(c[1]<0)
    {
        printf("y=%f%fx+%fx^2\n",c[0],c[1],c[2]);
    }
    else
    {
        printf("y=%f+%fx%fx^2\n",c[0],c[1],c[2]);
    }
    return 0;
}
