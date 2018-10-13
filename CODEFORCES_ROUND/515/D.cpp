#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int ksum = 0;
  int count = 0;
  vector<int> ans(n);
  int st=0;
  int now = st;
  while(st<n&&now<n){
    while(now<n){
      if (ksum+a[now]<=k){
        ksum+=a[now];
        now++;
        count++;
      }
      else {
        ans[st] = count;
        count--;
        ksum-=a[st];
        break;
      }
    }
    if (now==n) ans[st] = count;
    st++;
  }
  int answer = 0;
  int i=0;
  while (i<n){
    int st = i;
    int ks = 0;
    int tmpans=0;
    while(ks<m&&st<n){
      ks++;
      tmpans+=ans[st];
      st+=ans[st];
    }
    answer = max(answer, tmpans);
    if (st==n) break;
    i++;
  }
  cout << answer << endl;
}
