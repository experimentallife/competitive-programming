#include <iostream>
#include <cstdlib>

int main() {
  int d, 
      s = 0, 
      r = 0, a, b;
  float t, rv = 0, av, bv;

  while(std::cin >> d) {
    if(!s)
      a = d;
    
    if (s == 1) {
      av = a;
      av /= d;
      a *= d;
    }
// ---
    if (s == 2)
      b = d;

    if (s == 3) {
      bv = b;
      bv /= d;
      b *= d;

      t = av + bv;
      if (t > rv) {
        rv = t;
        r = a + b;
      }
      
      a = b;
      av = bv;
      s = 2;
    } else s++;  
  }

  std::cout << r;

  return 0;
}
