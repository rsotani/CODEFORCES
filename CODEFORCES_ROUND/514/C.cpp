#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> ans;
  int num = 2;
  while(ans.size()<n){
    if (n-ans.size()==3){
      ans.push_back(num/2);
      ans.push_back(num/2);
      ans.push_back(num*3/2);
    }
    for (int i=num/2; i<=n; i+=num){
      ans.push_back(num/2);
    }
    num*=2;
    }
  for (int i=0; i<n; i++){
    if (i>0) cout << ' ';
    cout << ans[i];
  }
  cout << endl;
}
