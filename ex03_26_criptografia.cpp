#include <iostream>
#include <iomanip>
using namespace std;

int cifrar(int numero);
int descifrar(int numero);

int main() {
   int opcion{0};

   while (opcion < 1 || opcion > 2) {
      cout << "1. Cifrar\n2. Descifrar\nElige una opción: ";
      cin >> opcion;
   }

   int numero{-1};

   while (numero < 0 || numero > 9999) {
      cout << "Introduce un entero de cuatro cifras: ";
      cin >> numero;
   }

   if (opcion == 1) {
      cout << "Número cifrado: " << setw(4) << setfill('0') << cifrar(numero) << "\n";
   }
   else {
      cout << "Número original: " << setw(4) << setfill('0') << descifrar(numero) << "\n";
   }
}

int cifrar(int numero) {
   int d1{numero / 1000};
   int d2{(numero / 100) % 10};
   int d3{(numero / 10) % 10};
   int d4{numero % 10};

   d1 = (d1 + 7) % 10;
   d2 = (d2 + 7) % 10;
   d3 = (d3 + 7) % 10;
   d4 = (d4 + 7) % 10;

   return d3 * 1000 + d4 * 100 + d1 * 10 + d2;
}

int descifrar(int numero) {
   int d1{numero / 1000};
   int d2{(numero / 100) % 10};
   int d3{(numero / 10) % 10};
   int d4{numero % 10};

   int o1{d3};
   int o2{d4};
   int o3{d1};
   int o4{d2};

   o1 = (o1 + 3) % 10;
   o2 = (o2 + 3) % 10;
   o3 = (o3 + 3) % 10;
   o4 = (o4 + 3) % 10;

   return o1 * 1000 + o2 * 100 + o3 * 10 + o4;
}
