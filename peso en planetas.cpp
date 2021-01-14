#include <iostream>

int main() {
  int weight;
  std::cin >> weight;

  int x;
  std::cin >> x;

  switch (x){
    case 1 :
      weight = weight*0.38;
      break;
    case 2:
      weight = weight*0.91;
      break;
    case 3 :
      weight = weight*0.38;
      break;
    case 4 :
      weight = weight*2.34;
      break;
    case 5 :
      weight = weight*1.06;
      break;
    case 6 :
      weight = weight*0.92;
      break;
    case 7 :
      weight = weight*1.19;
      break;
    default : 
      weight = weight*10;
      break;
  }
 std::cout << weight;
}
