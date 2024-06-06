#include<stdio.h>
#include<stdlib.h>
void shellsort(int arr[], int n)
{
    int i,j,gap;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            for(j=i-gap;j>=0;j-=gap)
            {
                if(arr[j+gap]>=arr[j])
                    break;
                else
                {
                    int temp = arr[j];
                    arr[j]=arr[j+gap];
                    arr[j+gap]=temp;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int n, arr[50];
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    printf("Array before sorting :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n Array after sorting using shell sort :\n");
    shellsort(arr,n);
}

/*
 int i,j,gap;
    for(gap=n/2;gap>0;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            for(j=i-gap; j>=0; j-=gap)
            {
                if(arr[j+gap]>=arr[j])
                    break;
                else{
                    int temp = arr[j];
                    arr[j]=arr[j+gap];
                    arr[j+gap]=temp;
                }
            }
        }
    }
*/
