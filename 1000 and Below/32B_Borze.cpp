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
    
    string str;
    cin>>str;

    fo(i,str.size()) {
        if(str[i] == '.') {
            cout<<0;
        }
        else {
            if(str[i+1] == '.') {
                cout<<1;
                i++;
            }
            else {
                cout<<2;
                i++;
            }
        }
    }

    return 0;
}