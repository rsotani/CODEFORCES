#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, r;
  cin >> n >> r;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int ans = 0;
  vector<int> heat(n,0);
  for (int i=0; i<n; i++){
    if (heat[i]==0){
      bool flag=false;
      for (int j=min(n-1,i+r-1); j>max(i-r,-1); j--){
        if (a[j]==1){
          ans++;
          for (int k=min(n-1,j+r-1); k>max(j-r,-1); k--){
            heat[k]++;
          }
          flag = true;
          break;
        }
        if (flag) break;
      }
      if (!flag){
        cout << -1 << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;
}
