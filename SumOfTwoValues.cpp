#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n, targetSum;
    std::cin>>n>>targetSum;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    int flag=0, twice_count=0;
    std::unordered_map<long long int, long long int> m;
    long long int index[2], c=0;
    for (long long int i = 0; i < n; i++)
        m[arr[i]]++;
 
    for (long long int i = 0; i < n; i++) 
    {
        if(m[targetSum - arr[i]]!=0 && twice_count<2)
        {
            flag= 1;
            twice_count++;
            index[c++]=i+1;
        }
    }
    if(0==flag || twice_count!=2 || n==1 )
        std::cout<<"IMPOSSIBLE";
    else
        {
            for(int i=0;i<2;i++)
            {
                std::cout<<index[i]<<" ";
            }
        }
    return 0;
}