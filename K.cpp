
#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
#define even(x) if(x%2==0)
#define odd(x) if(x%2!=0)

using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cout<<t<<" ";
    while(1){
        
        even(t){
            t=t/2;
            cout<<t<<" ";
        } else
        odd(t){
            t = t*3+1;
            cout<<t<<" ";
        }
        if(t==1) break;
    }

    return 0;
}