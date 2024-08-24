#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1)
            cout<<k;
            else if(i!=1 && i&1 && j&1 || i%2==0 && j%2==0)
            cout<<k+1<<" ";
            else
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}