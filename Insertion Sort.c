#include<stdio.h>
void InsertionSort(int arr[], int n)
{
    int i,j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        int key = i;
        while(j>=0 && arr[j]>arr[key] )
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
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
    InsertionSort(arr,n);
}
