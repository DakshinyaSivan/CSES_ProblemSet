#include<iostream>
#include<bits/stdc++.h>
#include<string>

int main()
{
    char dnaSeq[1000000];
    std::cin>>dnaSeq;
    int length = strlen(dnaSeq);
    
    int start=0, end=0, maximumlength=0, charcount=0;

    while(start<length)
    {
        end=start;
        charcount=0;
        while(dnaSeq[start]==dnaSeq[end])
        {
            charcount++;
            end++;
            if(end>=length)
                break;
        }
        maximumlength=std::max(maximumlength,charcount);
        start=end;
    }
    std::cout<<maximumlength;
    return 0;
}
