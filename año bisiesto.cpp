#include <iostream>

int main() {
   int year;
   std::cin >> year;

   

   if (year < 1000 || year > 9999){
     std::cout << "mete un numero de 4 cifras";
   }
   else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
      std::cout << "si es bisiesto";
   }
   else{std::cout << "no es bisiesto";} 
    
}
