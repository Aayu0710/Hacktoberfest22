#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;// size of the array
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int single,flag=0;
    for(int i=0; i<n; i++){
        flag = 0;
        single = arr[i];
        for(int j=0; j<n; j++){
            if((arr[j]==single)&&(j!=i)){
                flag=1;
            }    
        }
        if(flag==0)
            cout<<single;
    }
}