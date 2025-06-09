#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;

int algor(int num,int ciclos){
    if (num==1)return ciclos;
    if(num%2!=0){
        return algor(3*num+1,ciclos+1);
    } else{
        return algor(num/2,ciclos+1);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    while(cin>>a>>b){
        int max=0;
        for(int i=a;i<b;i++){
            int tam=algor(i,1);
            if(tam>max){
                max=tam;
            }
        }
        cout<<a<<" "<<b<<" "<<max<<endl;
    }
    return 0;
}