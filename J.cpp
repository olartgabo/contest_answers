#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;

int facto(int num){
    if(num==0||num==1){
        return 1;}
    int res = num;
    return res * facto(num-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int num;cin>>num;
        cout<<facto(num)<<endl;
    }
    return 0;
}