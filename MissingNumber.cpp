#include<iostream>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int partition(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
    int n;
    std::cin>>n;
    int sequence[n-1];
    for(int i=0;i<n-1;i++)
    {
        std::cin>>sequence[i];
    }
    
    quickSort(sequence,0,n-2);
    for(int i=0;i<n-1;i++)
    {
        if(sequence[0]!=1)
        {
            std::cout<<"1";
            break;
        }
        if((sequence[i+1]-sequence[i])!=1)
        {
            std::cout<<i+2;
            break;
        }
    }
    return 0;
}
