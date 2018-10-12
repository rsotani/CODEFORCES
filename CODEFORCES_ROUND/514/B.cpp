#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int> > forge(n, vector<int>(m,0));
  for (int i=0; i<n; i++){
    string s;
    cin >> s;
    for (int j=0; j<m; j++){
      if (s[j]=='#') forge[i][j] = 1;
    }
  }
  vector<vector<int> > ans(n, vector<int>(m,0));
  for (int i=1; i<n-1; i++){
    for (int j=1; j<m-1; j++){
      bool flag = true;
      for(int x=-1; x<2; x++){
        for (int y=-1; y<2; y++){
          if (x==0&&y==0) continue;
          if (forge[i+x][j+y]==0) flag = false;
        }
      }
      if (flag){
        for(int x=-1; x<2; x++){
          for (int y=-1; y<2; y++){
            if (x==0&&y==0) continue;
            ans[i+x][j+y] = 1;
          }
        }
      }
    }
  }
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      if (ans[i][j] != forge[i][j]){
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
}
