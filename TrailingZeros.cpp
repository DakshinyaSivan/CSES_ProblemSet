#include<iostream>
using namespace std;
#define ll long long
#define MAX 10000000

ll int resultArray[MAX];
ll int resultArraySize = 1;

ll int multiply(ll int number, ll int resultArray[], ll int resultArraySize) 
{
    ll int carry = 0, mulRes;
 
    for(ll int i=0; i<resultArraySize; i++) {
        mulRes = number * resultArray[i] + carry;
        resultArray[i] = mulRes%10;
        carry = mulRes / 10;
    }
 
    while(carry) {
        resultArray[resultArraySize++] = carry%10;
        carry = carry / 10;
    }
 
    return resultArraySize;
}
 
ll int *factorial(int n) 
{ 
    resultArray[0] = 1;

    while(n) 
    {
        resultArraySize = multiply(n--, resultArray, resultArraySize);
    }
 
    /*for(int i=resultArraySize-1; i>=0; i--) {
        cout<<resultArray[i];
    }*/
    return resultArray;
}
int main() 
{ 
    ll int n; 
    std::cin>>n;
    ll int *arr = factorial(n);
    /*cout<<resultArraySize<<endl;
    for(int i=0;i<resultArraySize;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;*/
    ll int count=0;
    for(ll int i=0; i<resultArraySize; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    std::cout<<count;
    return 0; 
} 