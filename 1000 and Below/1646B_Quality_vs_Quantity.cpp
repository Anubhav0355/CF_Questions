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
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        ll sumRed = arr[n-1];
        ll sumBlue = arr[0] + arr[1];

        int front = 2,back =n-2;
        while(front <= back) {
            if(sumRed <= sumBlue) {
                sumRed += arr[back--];
                sumBlue += arr[front++];
            }
            else {
                break;
            }
        }

        if(sumRed > sumBlue) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        } 

    }

    return 0;
}