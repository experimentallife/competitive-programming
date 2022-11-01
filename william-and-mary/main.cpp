#include <iostream>
#include <cstdlib>
// Wrong answer on test 3 
int main() {
  int d, o = 1, e = 100000;
 
  while(std::cin >> d) {
    if (d > o && !(d % 2)) o = d; 
    if (d < e && (d % 2)) e = d;
  }
 
  if (e == 100000 || o == 1) std::cout << "None";
  else std::cout << abs(e - o);
 
  return 0;
}
