#include<stdio.h>

void distict_elements(int a[], int n);
int main()
{
    int size, i, arr[20];
    printf("Enter the array size: ");
    scanf("%d", &size);
    printf("Enter the array elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    distict_elements(arr, size);
    return 0;
}

void distict_elements(int a[], int n)
{
    printf("The distinct array elements\n");
    int i,j,count=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++) 
        {
            if (a[i] == a[j])
                break;
        }
        
        if (i == j)
        {
            count++;
            printf("%d ", a[i]);
        }
    }
    printf("\ncount=%d",count);
}