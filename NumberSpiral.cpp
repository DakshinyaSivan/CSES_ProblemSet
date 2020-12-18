#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void numberSpiral()
{
    long long int row_y,col_x;
    std::cin>>row_y;
    std::cin>>col_x;

    long long int value=0;
    long long int maxi= std::max(row_y,col_x);
    if(col_x % 2 != 0)
    {
        if(maxi==col_x)
            value= (maxi*maxi)+1 - row_y;
        
        else
        {
            if(row_y % 2 == 0)
                value= (maxi*maxi)+1 - col_x;
            else
                value= (maxi-1)*(maxi-1) + col_x;
        }
    }

    else
    {
        if(maxi==col_x)
            value = (maxi-1)*(maxi-1) + row_y;
        else
        {
            if(row_y % 2 == 0)
                value= (maxi*maxi) - col_x + 1;
            else
                value= (maxi-1)*(maxi-1) + col_x;
        }
        
    }
    
    std::cout<<value<<endl;
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        numberSpiral();
    }
}