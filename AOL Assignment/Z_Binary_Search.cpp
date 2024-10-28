#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(a[j+1]<a[j])
    //         {
    //             int temp=a[j+1];
    //             a[j+1]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

    sort(a,a+n);

    for(int i=0;i<q;i++)
    {
        int x; cin>>x;
        int l=0,r=n-1;
        int flag=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(x==a[mid])
            {
                flag=1;
                break;
            }
            else if(x>a[mid])
            l=mid+1;
            else
            r=mid-1;
        }

        if(flag)
        cout<<"found"<<endl;
        else
        cout<<"not found"<<endl;
    }

    return 0;
}