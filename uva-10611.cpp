#include<bits/stdc++.h>
using namespace std;
long long c[1000000];
int main()
{
    long long  ans,ans1,n,q,x,t;
    cin>>t;
    for(int i=0;i<t;i++){
        scanf("%lld",&c[i]);
    }
    cin>>q;
    while(q--){
        cin>>x;
        ans = 0;
        for(int j=0;j<t;j++){
            if(x>c[j]){
                ans = c[j];
            }
            else
                break;
        }
        if(ans == 0)
            cout<<"X ";
        else
            cout<<ans<<" ";

        ans1 = 0;
        for(int j=t-1;j>=0;j--){
            if(x<c[j])
                ans1 = c[j];
            else
                break;
        }
        if(ans1 == 0)
            cout<<"X\n";
        else
            cout<<ans1<<endl;
    }
    return 0;
}
