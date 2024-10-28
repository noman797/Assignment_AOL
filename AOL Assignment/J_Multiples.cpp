#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int a,b; cin>>a>>b;
    if(a%b==0 or b%a==0)
    cout<<"Multiples"<<endl;
    else
    cout<<"No Multiples"<<endl;

    return 0;
}