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
    int gauss = t*(t+1)/2;
    int sum=0;
    for(int i=0;i<t-1;i++){
        int a;cin>>a;
        sum+=a;
    }
    cout<<gauss-sum;
    return 0;
}