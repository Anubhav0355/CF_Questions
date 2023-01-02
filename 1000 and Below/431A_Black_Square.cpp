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
    
    ll a1,a2,a3,a4,totalCaloriesWasted = 0;
    string str;

    cin>>a1>>a2>>a3>>a4>>str;

    fo(i,str.size()) {
        if(str[i] == '1') {
            totalCaloriesWasted += a1;
        }
        else if(str[i] == '2') {
            totalCaloriesWasted += a2;
        }
        else if(str[i] == '3') {
            totalCaloriesWasted += a3;
        }
        else {
            totalCaloriesWasted += a4;
        }
    }

    cout<<totalCaloriesWasted;

    return 0;
}