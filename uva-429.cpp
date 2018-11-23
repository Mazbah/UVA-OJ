#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        vector<string> words;
        string word;
        while(cin>>word){
            if(word == "*")
                break;
            words.push_back(word);
        }
        cin.ignore();

        string line;
        while(getline(cin,line) && line != "")
        {
            stringstream ss(line);
            string s,t;
            ss>> s>> t;
            /// BFS
            queue<string> q;
            map<string,int> trans;

            trans[s] = 0;
            q.push(s);
            while(!q.empty() && trans.count(t) == 0)
            {
                string u = q.front();
                q.pop();
                /// loop over every word in the dictionary
                for(int i =0;i<words.size();i++)
                {
                    const string &v = words[i];
                    if(!trans.count(v) && u.length()== v.length())
                    {
                        int diff = 0;
                        for(int j = 0;j<u.length();j++){
                            if(u[j] != v[j])
                                diff++;
                        }
                        if(diff == 1){
                            trans[v] = trans[u]+1;
                            q.push(v);
                        }
                    }
                }
            }
            cout<<s<<" "<<t<<" "<<trans[t]<<endl;
        }
        if(T)
            cout<<endl;
    }
    return 0;
}
