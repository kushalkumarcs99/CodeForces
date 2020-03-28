#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int a[n+1][n+1];
        int count=0;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        cin>>a[i][j];
                        count+=a[i][j];    
                }
        }
        if(count==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
