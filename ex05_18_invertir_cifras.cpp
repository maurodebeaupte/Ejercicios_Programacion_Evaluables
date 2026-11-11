#include <iostream>
using namespace std;

int reverseDigits(int numero);

int main() {
   int numero;
   cout << "Introduce un número entero: ";
   cin >> numero;

   cout << "Con las cifras invertidas: " << reverseDigits(numero) << "\n";
}

int reverseDigits(int numero) {
   int signo{numero < 0 ? -1 : 1};
   numero *= signo;

   int invertido{0};

   while (numero > 0) {
      invertido = invertido * 10 + numero % 10;
      numero /= 10;
   }

   return invertido * signo;
}
