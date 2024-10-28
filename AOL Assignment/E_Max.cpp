#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxx=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }
    cout<<maxx<<endl;

    return 0;
}