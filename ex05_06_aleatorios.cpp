#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
   default_random_engine engine{static_cast<unsigned int>(time(0))};
   int n;

   uniform_int_distribution<int> a{1, 2};
   n = a(engine);
   cout << "a) 1 <= n <= 2       -> " << n << "\n";

   uniform_int_distribution<int> b{1, 100};
   n = b(engine);
   cout << "b) 1 <= n <= 100     -> " << n << "\n";

   uniform_int_distribution<int> c{0, 9};
   n = c(engine);
   cout << "c) 0 <= n <= 9       -> " << n << "\n";

   uniform_int_distribution<int> d{1000, 1112};
   n = d(engine);
   cout << "d) 1000 <= n <= 1112 -> " << n << "\n";

   uniform_int_distribution<int> e{-1, 1};
   n = e(engine);
   cout << "e) -1 <= n <= 1      -> " << n << "\n";

   uniform_int_distribution<int> f{-3, 11};
   n = f(engine);
   cout << "f) -3 <= n <= 11     -> " << n << "\n";
}
