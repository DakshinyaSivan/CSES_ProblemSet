//#include<bits/stdc++.h>
#include<iostream>
int main()
{
    long long int n;
    std::cin>>n;
    std::cout<<n<<" ";
    while(n>1)
    { 
        if(n%2 == 0)
        {
            n = n/2;
            std::cout<<n<<" ";
        }
        else
        {
            n = n*3+1;
            std::cout<<n<<" ";
        }
        
    }
    return 0;
}