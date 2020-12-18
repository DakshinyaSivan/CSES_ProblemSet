#include<iostream>
#include<bits/stdc++.h>

int main()
{
    long long int n;
    std::cin>>n;
    long long int array[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    long long int turns = 0;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        if(array[i]>array[j])
        {
            int diff = array[i]-array[j];
            array[j]= array[i];
            turns = turns + diff;
        }
    }
    std::cout<<turns;
    return 0;
}
