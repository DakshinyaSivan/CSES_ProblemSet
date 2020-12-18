#include<iostream>
#include<bits/stdc++.h>

int main()
{
    long long int n;
    std::cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    if(n==2 || n==3)
    {
        std::cout<<"NO SOLUTION";
    }
    else
    {
        if(n%2==0)
        {
        for(int i=1;i<n;i=i+2)
        {
            std::cout<<arr[i]<<" ";
        }
        for(int i=0;i<n;i=i+2)
        {
            std::cout<<arr[i]<<" ";
        }

        }

        else
        {
        for(int i=n-2;i>=0;i=i-2)
        {
            std::cout<<arr[i]<<" ";
        }
        for(int i=n-1;i>=0;i=i-2)
        {
            std::cout<<arr[i]<<" ";
        }
        }
    }
    
   return 0;
}