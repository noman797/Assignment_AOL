#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int maxx=a;
    if(b>maxx)
    maxx=b;
    if(c>maxx)
    maxx=c;
    
    int minn=a;
    if(b<minn)
    minn=b;
    if(c<minn)
    minn=c;
    cout<<minn<<" "<<maxx<<endl;

    return 0;
}