#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int TERMINOS{200000};
   double pi{0.0};
   double signo{1.0};
   int primerTermino{0};

   cout << "Accuracy set at: " << TERMINOS << "\n\n";
   cout << left << setw(8) << "term" << "pi\n";
   cout << fixed << setprecision(8);

   for (int termino{1}; termino <= TERMINOS; ++termino) {
      double denominador{2.0 * termino - 1.0};
      pi += signo * 4.0 / denominador;
      signo = -signo;

      cout << left << setw(8) << termino << pi << "\n";

      if (primerTermino == 0 && pi >= 3.14159 && pi < 3.14160) {
         primerTermino = termino;
      }
   }

   cout << "\nSe obtiene por primera vez un valor que empieza por 3.14159 "
        << "en el término " << primerTermino << "\n";
}
