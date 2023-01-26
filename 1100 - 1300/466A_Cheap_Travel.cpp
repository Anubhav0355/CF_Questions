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
    
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int price1 = n*a;
    int price2 = 0;

    price2 = (n/m)*b + min((n%m)*a,b);

    if(price1 < price2) {
        cout<<price1;
    }
    else {
        cout<<price2;
    }

    return 0;
}