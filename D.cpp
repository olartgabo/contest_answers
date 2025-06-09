#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>lista;
        set<int>reps;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            lista.push_back(a);
            reps.insert(a);
        }
        sort(lista.begin(),lista.end());
        if(reps.size()==1){
            cout<<"-1"<<endl;
            continue;
        }
        
        int iter =0;
        while(lista[iter]==lista[0]) iter++;
        cout <<iter<<" "<<n-iter<<endl;
        for(int j=0;j<iter;++j)cout<<lista[j]<<" ";
        cout<<endl;
        for(int j=iter;j<n;++j)cout<<lista[j]<<" ";
        cout<<endl;

    }
    return 0;
}