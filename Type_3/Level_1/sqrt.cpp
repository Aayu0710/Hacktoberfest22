#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp,sq;
    sq = n / 2;
    temp = 0;
    while(sq!=temp)
    {
        temp = sq;
        sq = (n/temp + temp) / 2;
    }
    cout<<sq<<endl;
}