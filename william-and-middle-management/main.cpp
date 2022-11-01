#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
  setprecision(6);

  int a, b, r = 0;
  int r1 = 0, r2 = 0;
  float rv = 0;
 
  while(cin >> a && cin >> b) {
    r += a * b;
    rv += a / b;
    cout << rv;
    if (r2 < rv) {
      r1 = r;
      r2 = rv;
    }
    
    r = a * b;
    rv = a / b;
  }
  
  cout << r1;
 
  return 0;
}
