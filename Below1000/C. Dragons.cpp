#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s,n;
    cin>>s>>n;

    vector<pair<int,int>> vp;

    int x,y;
    for(int i=0; i<n; i++) {
        cin>>x>>y;
        vp.push_back({x,y});
    }

    //sorting w.r.t first element of pair
    sort(vp.begin(),vp.end());

    bool canDefeatAll = true;

    for(int i=0; i<vp.size(); i++) {
        if(s > vp[i].first) {
            s += vp[i].second;
        }
        else {
            canDefeatAll = false;
            break;
        }
    }

    if(canDefeatAll) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}