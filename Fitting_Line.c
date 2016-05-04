#include<stdio.h>

int main() {
    int i,j,n;
    float x[10],y[10],s1=0,s2=0,s3=0,s4=0,a,d,b;
    printf("\nEnter the Value of n\n");
    scanf("%d",&n);
    printf("\nEnter the values of x and y\n");
    for(i=0;i<n;i++) {
        scanf("%f%f",&x[i],&y[i]);
    }
    for(i=0;i<n;i++) {
        s1=s1+x[i];
        s2=s2+x[i]*x[i];
        s3=s3+y[i];
        s4=s4+x[i]*y[i];
    }
    d=n*s2-s1*s1;
    a=(s2*s3-s1*s4)/d;
    b=(n*s4-s1*s3)/d;
    printf("\nThe values of a and b are : %f\t%f\n",a,b);
    printf("\nThe Required Linear Relation is : \n");
    if(b>0){
        printf("\ny=%f+%fx\n",a,b);
    }
    else {
        printf("y=%f%fx",a,b);
    }
}