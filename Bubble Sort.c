#include<stdio.h>
void BubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
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
    BubbleSort(arr,n);
}
