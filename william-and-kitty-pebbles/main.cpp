#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
  std::vector<int> l;
  int c, d, kp = 100000;
  std::cin >> c;

  while(std::cin >> d) {
    l.push_back(d);
    if (d < kp) kp = d;
  }

  int a = 0;
  for(auto i = l.begin(); i != l.end(); ++i)
    a += abs(*i - kp);

  std::cout << a;

  return 0;
}
