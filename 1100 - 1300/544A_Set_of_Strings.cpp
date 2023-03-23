#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int k;
    cin>>k;

    string str;
    cin>>str;

    map<char,int> m;

    fo(i,str.size()) {
        m[str[i]]++;
    }

    if(m.size() < k) {
        cout<<"NO\n";
    }
    else {
        cout<<"YES";
        fo(i,str.size()) {
           if(m[str[i]] && k) {
                --k;
                cout<<"\n"<<str[i];
           }
           else {
                cout<<str[i];
           }

           m[str[i]] = 0;
        }
    }

    return 0;
}