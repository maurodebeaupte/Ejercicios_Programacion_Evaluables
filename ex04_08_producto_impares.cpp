#include <iostream>
using namespace std;

int main() {
   long long producto{1};

   for (int i{1}; i <= 15; i += 2) {
      producto *= i;
   }

   cout << "Producto de los impares del 1 al 15: " << producto << "\n";
}
