#include <iostream>
#include <cassert>

int sum(int a, int b){
return a+b;
}

int main() {
  assert(sum(5,5))==10;
  return 0;
}
