#include<iostream>
#include<bits/stdc++.h>

int main()
{
    long long int n,count=0;
    std::cin>>n;
    long long int sumOfNumbers=(n*(n+1))/2;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    if(sumOfNumbers % 2 == 0)
    {
        if(n % 2 == 0)
        {
            long long int outputArray1[n], outputArray2[n],index1=0,index2=0;
            long long int itr=1;
            long long int quarter=n/4;
            for(int i=0; itr<=quarter;i++)
            {
                outputArray1[index1++]=arr[i];
                itr++;
            }
            itr=1;
            int i;
            for(i=n-1;itr<=quarter;i--)
            {
                outputArray1[index1++]=arr[i];
                itr++;
            }
            for(int j=i; j>=quarter; j--)
            {
                outputArray2[index2++]=arr[j];
            }
            std::cout<<"YES"<<std::endl;
            std::cout<<n/2<<std::endl;
            for(int k=0;k<index1;k++)
            {
                std::cout<<outputArray1[k]<<" ";
            }
            std::cout<<std::endl<<n/2<<std::endl;
            for(int k=0;k<index2;k++)
            {
                std::cout<<outputArray2[k]<<" ";
            }

        }
        else
        {
            long long int halfOfSum = sumOfNumbers/2;
            long long int outputArray1[n], outputArray2[n],index1=0,index2=0;
            long long int sum=0;
            for(int i=n-1;i>=0;i--)
            {
                if(sum+arr[i]<=halfOfSum)
                {
                    count++;
                    sum=sum+arr[i];
                    outputArray1[index1++]=arr[i];
                }
                else
                {
                    outputArray2[index2++]=arr[i];
                }
                
            }
            std::cout<<"YES"<<std::endl;
            std::cout<<count<<std::endl;
            for(int i=0;i<index1;i++)
            {
                std::cout<<outputArray1[i]<<" ";
            }
            std::cout<<std::endl<< n-count<<std::endl;
            for(int i=0;i<index2;i++)
            {
                std::cout<<outputArray2[i]<<" ";
            }
        }
        
    }
    else
    {
        std::cout<<"NO";
    }
    
    return 0;
}