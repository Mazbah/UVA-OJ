#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        vector<int> v;
        int a;
        for(int i = 0; i<n;i++){
            cin>>a;
            if(a>0) v.push_back(a);
        }
        int size = v.size();
        if(size==0) cout<<"0\n";
        else{
            for(int i=0;i<size;i++){
                cout<<v[i];
                if(i!=size-1)cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
