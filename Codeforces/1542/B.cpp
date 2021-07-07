// Muhammad Mirza Fathan 2021
#include <bits/stdc++.h>
using namespace std;

/************************/
/* TEMPLATES */

#define fr front
#define bk back
#define pb push_back
#define mp make_pair
#define sc second
#define fi first
# define ll long long
# define ld long double
# define rep(i,x,y) for(ll i=x;i<y;i++)
# define rrep(i,x,y) for(ll i=x;i>=y;i--)
# define debug_stl(x) for(auto i:x){cout<<i<<" ";}cout<<endl;
# define debug_1d(x,a,b) rep(i,a,b){cout<<x[i]<<" ";}cout<<endl;
# define debug_2d(x,a1,b1,a2,b2) rep(i,a1,b1){rep(j,a2,b2){cout<<x[i][j]<<" ";}cout<<endl;}
# define all(x) x.begin(), x.end()
# define MOD (ll)(1e9+7)
# define INF8 (ll)(1e17+5)
# define endl '\n'

typedef vector<ll> VI;
typedef vector<bool> VB;
typedef vector<string> VS;
typedef vector<vector<ll> > VVI;
typedef pair<ll,ll> PI;
typedef pair<ll,PI > PPI;
typedef vector<PI> VP;
typedef vector<PPI> VPP;

ll logarithm(ll a, ll b) {
  ll ans = 0;
  ll temp =a;
  while(a<=b) {
    a*=temp;
    ans++;
  }
  return a/temp;
}

void solve() {
  ll n, a, b; cin >> n >> a >> b;

  if(b==1) {
    cout << "Yes" << endl;
    return;
  }
  if(a==1) {
    if((n-a)%b==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
  }

  ll ax = logarithm(a,n);
  
  while(ax>0) {
    ll c = n-ax;
    if(c%b==0) {
      cout << "Yes" << endl;
      return;
    }
    ax/=a;
  }

  cout << "No" << endl;


}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t; cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}
