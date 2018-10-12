#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, L, a;
  cin >> n >> L >> a;
  long long bef = 0;
  long long ans = 0;
  for (int i=0; i<n; i++){
    int t, l;
    cin >> t >> l;
    ans += (t-bef)/a;
    bef = t+l;
  }
  ans += (L-bef)/a;
  cout << ans << endl;
}
