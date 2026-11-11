#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int flip();

int main() {
   int caras{0};
   int cruces{0};

   for (int lanzamiento{1}; lanzamiento <= 100; ++lanzamiento) {
      if (flip() == 1) {
         cout << "Heads ";
         ++caras;
      }
      else {
         cout << "Tails ";
         ++cruces;
      }

      if (lanzamiento % 10 == 0) {
         cout << "\n";
      }
   }

   cout << "\nHeads (cara): " << caras << " veces\n";
   cout << "Tails (cruz): " << cruces << " veces\n";
}

int flip() {
   static default_random_engine engine{static_cast<unsigned int>(time(0))};
   static uniform_int_distribution<int> moneda{0, 1};
   return moneda(engine);
}
