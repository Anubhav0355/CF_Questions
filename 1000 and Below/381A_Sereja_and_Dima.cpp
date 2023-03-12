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
    
    int n;
    cin>>n;

    int arr[n];
    fo(i,n) {
        cin>>arr[i];
    }

    int s=0,d=0;

    int front = 0, back = n-1;
    int counter = 0;

    while(front <= back) {
        if(counter&1) {
            if(arr[front] > arr[back]) {
                d += arr[front++];
            }
            else {
                d += arr[back--];
            }
        }
        else {
            if(arr[front] > arr[back]) {
                s += arr[front++];
            }
            else {
                s += arr[back--];
            }
        }
        counter++;
    }

    cout<<s<<" "<<d;

    return 0;
}