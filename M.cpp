#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    vector<char>let;
    int counter=1;
    int max=1;
    for(int i=0;i<s.length();i++){
        let.push_back(s[i]);
        if(i>=1){
            if(let[i]==let[i-1]){
                counter++;
                if(counter>max){
                    max=counter;
                }
            } else{
                counter=1;
            }
        }
    }
    cout<<max;
    return 0;
}