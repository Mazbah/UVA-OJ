#include<iostream>
using namespace std;
int main()
{
    long long int N;
    while(1){
        cin>>N;
        if(N<0)
            break;
        else
            if(N==1) cout<<"0%"<<endl;
            else cout<<(N*100)/4<<"%"<<endl;
    }
    return 0;
}

