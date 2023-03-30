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
        int p;
        cin>>str>>p;

        int price = 0;

        for(auto x : str) {
            price += (x-'a'+1);
        }

        string temp = str;
        sort(temp.begin(),temp.end());

        int i = temp.size()-1;

        while(p < price) {
            price -= (temp[i] - 'a' + 1);
            temp[i--] = ',';
        }

        map<char,int> mp;
        for(auto x : temp) {
            mp[x]++;
        }

        for(auto x : str) {
            if(mp[x]) {
                cout<<x;
                mp[x]--;
            }
        }
        cout<<"\n"; 

    }

    return 0;
}