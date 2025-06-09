#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>lis;
    int sumdif=0;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        lis.push_back(a);
        if(i>=1){
            if(lis[i]<lis[i-1]){//cae
                int dif = lis[i]-lis[i-1];//1
                sumdif+= abs(dif);
            }
        }
    }
    cout<<sumdif;
    return 0;
}