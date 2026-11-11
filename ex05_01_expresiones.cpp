#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   double x;
   cout << fixed << setprecision(1);

   x = fabs(7.5);
   cout << "a) fabs(7.5) = " << x << "\n";

   x = floor(7.5);
   cout << "b) floor(7.5) = " << x << "\n";

   x = fabs(0.0);
   cout << "c) fabs(0.0) = " << x << "\n";

   x = ceil(0.0);
   cout << "d) ceil(0.0) = " << x << "\n";

   x = fabs(-6.4);
   cout << "e) fabs(-6.4) = " << x << "\n";

   x = ceil(-6.4);
   cout << "f) ceil(-6.4) = " << x << "\n";

   x = ceil(-fabs(-8 + floor(-5.5)));
   cout << "g) ceil(-fabs(-8 + floor(-5.5))) = " << x << "\n";
}
