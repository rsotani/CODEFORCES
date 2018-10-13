#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  map<int, int> L, R;
  int count=0, lcount=0, rcount=0;
  for (int i=0; i<q; i++){
    char con;
    int id;
    cin >> con >> id;
    if (con=='?'){
      int tmpans=1e9;
      if (L.find(id)!=L.end()){
        tmpans = min(tmpans,min(lcount-1-L[id], rcount+L[id]));
      }
      if (R.find(id)!=R.end()){
        tmpans = min(tmpans,min(rcount-1-R[id], lcount+R[id]));
      }
      cout << tmpans << endl;
    }
    else {
      count++;
      if (con=='L'){
        L[id] = lcount;
        lcount++;
      }
      else{
        R[id] = rcount;
        rcount++;
      }
    }
  }
}
