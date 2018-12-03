#include<bits/stdc++.h>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int i,t,j;
    cin>>t;
    getchar();
        while(t--){
            stack <char> mystack;
            getline(cin,str);
            int sl = str.size();
            for(j=0;j<sl;j++){
                if(!mystack.empty() && mystack.top()=='(' && str[j]==')')
                        mystack.pop();
                else if(!mystack.empty() && mystack.top()=='[' && str[j]==']')
                     mystack.pop();
                else
                    mystack.push(str[j]);
            }
        if(mystack.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    }
    return 0;
}
