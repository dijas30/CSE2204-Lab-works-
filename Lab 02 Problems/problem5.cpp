#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool subset(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int set[n];
    for(int i=0;i<n;i++)
    {
        cin>>set[i];
    }
    int target;
    cin>>target;

    if(subset(set,n,target))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    return 0;
}
