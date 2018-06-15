#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,sum=0,carry=0,j,ans=0;
    cin>>n;
    for(i=0; i<3; i++)
    {   carry=sum;

        sum=0;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            // ans=carry-sum;
            sum+=a[j];
        }
 ans=carry-sum;
        if(i!=0)
        cout<<ans<<endl;
     //    ans=carry-sum;
        --n;
    }

}
