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
        int n,k;
        cin>>n>>k;

        vi a(n);
        vi b(n);

        fo(i,n) {
            cin>>a[i];
        }

        fo(i,n) {
            cin>>b[i];
        }

        sort(all(a));
        sort(all(b),greater<int>());

        int i = 0;
        while(k--) {
            if(a[i] < b[i]) {
                swap(a[i],b[i]);
            }
            else {
                break;
            }
            i++;
        }

        ll sum = 0;
        fo(i,n) {
            sum += a[i];
        }

        cout<<sum<<"\n";
    }

    return 0;
}