#include <stdio.h>

int main()
{
    int j;
    printf("How many digits of fibonacci do you want : ");
    scanf("\n%d",&j);
    float a[j];
    a[0]=0;
    a[1]=1;
    for(int i=0;i<j;i++)
    {
        a[i+2]=a[i+1]+a[i];
        printf("%d-->%.0f\n",i+1,a[i]);
    }
}
