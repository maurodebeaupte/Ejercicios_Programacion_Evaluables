#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
   cout << "=== a) Factorial ===\n";
   int n{-1};

   while (n < 0) {
      cout << "Introduce un entero no negativo: ";
      cin >> n;
   }

   cpp_int factorial{1};
   int contador{n};

   while (contador > 1) {
      factorial *= contador;
      --contador;
   }

   cout << n << "! = " << factorial << "\n\n";

   cout << "=== b) Estimación de e ===\n";
   int terminosE{0};

   while (terminosE < 1) {
      cout << "Introduce el número de términos (precisión): ";
      cin >> terminosE;
   }

   double e{1.0};
   double fact{1.0};
   int i{1};

   while (i < terminosE) {
      fact *= i;
      e += 1.0 / fact;
      ++i;
   }

   cout << "Valor estimado de e con " << terminosE << " términos: "
        << fixed << setprecision(15) << e << "\n\n";
   cout << defaultfloat << setprecision(6);

   cout << "=== c) Cálculo de e^x ===\n";
   double x{0.0};
   int terminosX{0};

   cout << "Introduce el valor de x: ";
   cin >> x;

   while (terminosX < 1) {
      cout << "Introduce el número de términos (precisión): ";
      cin >> terminosX;
   }

   double resultado{1.0};
   double termino{1.0};
   int k{1};

   while (k < terminosX) {
      termino = termino * x / k;
      resultado += termino;
      ++k;
   }

   cout << "e^" << x << " con " << terminosX << " términos = "
        << fixed << setprecision(15) << resultado << "\n";
}
