#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(n==1&&m==1){
        cout<<0;
        return 0;
    }
    int p = n*m;//8
    int counter=0;
    while(true){
        p=p-2;
        counter++;
        if(p==0||p==1)break;
    }
    cout<<counter;

    return 0;
}