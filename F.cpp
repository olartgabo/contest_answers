#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    map<string,int> lov;
    while(t--){
        string line;
        getline(cin,line);

        int spacePos = line.find(' ');
        string country = line.substr(0,spacePos);

        lov[country]++;
    }
    for(const auto& par : lov){
        cout<<par.first<<" "<<par.second<<endl;
    }
    return 0;
}