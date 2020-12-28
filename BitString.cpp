#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)

int power(ll base, ll pow, ll m)
{
    ll answer=1;
    pow = pow % m;

    while(pow>0)
    {
    if(pow & 1)
        answer = (answer * base) % m;
    pow = pow >> 1;
    base = (base * base) % m;
    }
    return answer;
}


int main()
{
    ll int n;
    std::cin>>n;
    ll int bit;
    bit = power(2,n,mod);
    std::cout<<bit;
    return 0;
}