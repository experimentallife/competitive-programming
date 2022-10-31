#include <iostream>
#include <cstdlib>
 
int main() {
  int data, maxOdd = 0, minEven = 0;
 
  while(std::cin >> data) {
    if (1 <= data && data <= 100000) {
      if ((data % 2 && !minEven) || (data % 2 && minEven > data)) minEven = data;
      if ((!(data % 2) && !maxOdd) || (!(data % 2) && maxOdd < data)) maxOdd = data;
    }
  }
 
  if (!minEven || !maxOdd) std::cout << "None";
  else std::cout << abs(minEven - maxOdd);
 
  return 0;
}
