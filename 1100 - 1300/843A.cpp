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
    
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        string a,b,c;

        if(str[1] == 'a') {
            a = str.substr(0,1);
            b = str.substr(1,1);
            c = str.substr(2,str.size()-2);
        }
        else {
            a = str.substr(0,1);
            b = str.substr(1,str.size()-2);
            c = str.substr(str.size()-1,1);
        }

        cout<<a<<" "<<b<<" "<<c<<"\n";
        
    }

    return 0;
}