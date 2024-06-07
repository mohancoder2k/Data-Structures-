#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SelectionSort(int arr[], int n )
{
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min = j;
            swap(&arr[min], &arr[i]);
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
    SelectionSort(arr,n);
}

