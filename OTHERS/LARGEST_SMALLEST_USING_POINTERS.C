#include<stdio.h>
void minmax (int arr[],int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for (i=1; i<len ;i++)
    {
        if (arr[i] > *max )
        {
            if (arr[i]> *max)
                *max = arr[i];
            if (arr[i]< *min )
                *min = arr[i];
        }
    }
}
int main()
{
    int a[] = {7,5,7545,34,78,6,9,365,6789,34,9,2,7890};
    int min,max;
    int len = sizeof(a)/sizeof(a[0]);
    minmax(a,len, &min, &max);
    printf("minimum value is : %d and maximum value is : %d \n",min,max);
    return 0;
}