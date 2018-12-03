#include<bits/stdc++.h>
using namespace std;
#define MAX 1000002

vector<long int> prime(90000),m(90000);

void sieve()
{
    vector<long int> arr(MAX,1);

    for(long long int i=2;i<=sqrt(MAX);i++){
        if(arr[i] == 1){
            for(long long int j=i;j*i<MAX;j++){
                arr[i*j] = 0;
        }
        }
    }
    int c=0;

    for(int i=0;i<MAX;i++){
        if(arr[i] == 1){
            prime[c] = i;
            c++;
        }
    }

    for(int i=0;i<c;i++){
        m[i] = prime[i+1]-prime[i];
    }
}

int main()
{
    int t,u,lo;
    sieve();
    cin>>t;
    while(t--){
        cin>>lo>>u;
        int di[500];
        for(int i=0;i<500;i++){
            di[i] = 0;
        }

        int j=-1,k;
        for(int i=0;prime[i+1]<=u;i++){
            if(prime[i]>=lo){
                di[m[i]]++;
                if(j<di[m[i]]){
                    j = di[m[i]];
                    k = m[i];
                }
            }
        }
        if(j==1){
            cout<<"No jumping champion\n";
        }
        else{
            cout<<"The jumping champion is "<<k<<endl;
        }
    }
    return 0;
}
