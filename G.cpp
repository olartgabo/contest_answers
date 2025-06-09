#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define Yes cout <<"Yes"<<"\n";
#define No cout <<"No"<<"\n";
using ll = long long;


struct chambaData {
    int time, cobra, index;
};

// Comparator function: sort by (cobra / time) descending; break ties by index
bool cmp(const chambaData& a, const chambaData& b) {
    ll left = 1LL * a.cobra*b.time;
    ll right = 1LL * b.cobra*a.time;
    if (left == right)
        return a.index < b.index; // lex smallest
    return left > right;
}

int main() {
    int testCases;
    cin>>testCases;
    cin.ignore();

    while (testCases--) {
        int n;
        cin >>n;
        vector<chambaData> chambaData(n);

        for (int i =0;i<n;++i) {
            cin>>chambaData[i].time>>chambaData[i].cobra;
            chambaData[i].index =i+1; 
        }

        sort(chambaData.begin(), chambaData.end(), cmp);

        for (int i = 0; i < n; ++i) {
            if (i > 0) cout<<" ";
            cout <<chambaData[i].index;
        }
        cout <<endl;
        if (testCases) cout<<endl; // blank line between test cases
        cin.ignore(); // consume newline after chambaData list
    }

    return 0;
}
