#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        cout<<i<<endl;
        flag=1;
        }
    }

    if(flag==0)
    cout<<-1<<endl;

    return 0;
}