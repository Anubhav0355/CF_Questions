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
        int numOdd = 0;
        int numEven = 0;
        int count = 0;

        fo(i,n) {
            cin>>arr[i];

            if(arr[i]&1) {
                numOdd++;
            }
            else {
                numEven++;
            }
        }

        bool isPossible = true;

        if(n&1) {
            if(numEven != numOdd+1) {
                isPossible = false;
            }
        }
        else {
            if(numEven != numOdd) {
                isPossible = false;
            }
        }

        if(isPossible) {
            fo(i,n) {
                if(i&1) {
                    if(arr[i]&1) {
                        continue;
                    }
                    else {
                        for(int j=i+1; j<n; j++) {
                            if(j%2 == 0 && arr[j]&1) {
                                swap(arr[i],arr[j]);
                                count++;
                                break;
                            }
                        }
                    }
                }
                else {
                    if(arr[i]%2 == 0) {
                        continue;
                    }
                    else {
                        for(int j=i+1; j<n; j++) {
                            if(j&1 && arr[j]%2 == 0) {
                                swap(arr[i],arr[j]);
                                count++;
                                break;
                            }
                        }
                    }
                }
            }
        }

        if(isPossible) {
            cout<<count<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }
    }

    return 0;
}