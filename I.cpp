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
    for(int i=1;i<=t;i++){
        int quiero, presto;
        cin>>quiero>>presto;
        vector<int>stamps(presto);
        for(int j=0;j<presto;++j){
            cin>>stamps[j];
        }
        sort(stamps.rbegin(),stamps.rend());
        int sum=0;
        int counter=0;
        for(int j=0;j<presto;++j){
            if(sum>=quiero)break;
            sum+=stamps[j];
            counter++;
        }
        if(sum<quiero){
            cout<<"Scenario #"<<i<<":"<<endl;
            cout<<"impossible";
            return 0;
        }
        cout<<"Scenario #"<<i<<":"<<endl;
        cout<<counter<<endl<<endl;

    }
    return 0;
}