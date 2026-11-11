#include <iostream>
using namespace std;

void hanoi(int discos, int origen, int destino, int temporal);

int main() {
   int discos{0};

   while (discos < 1) {
      cout << "¿Cuántos discos quieres mover? ";
      cin >> discos;
   }

   cout << "Movimientos para pasar " << discos
        << " discos de la varilla 1 a la varilla 3:\n";
   hanoi(discos, 1, 3, 2);
}

void hanoi(int discos, int origen, int destino, int temporal) {
   if (discos == 1) {
      cout << origen << " -> " << destino << "\n";
      return;
   }

   hanoi(discos - 1, origen, temporal, destino);
   cout << origen << " -> " << destino << "\n";
   hanoi(discos - 1, temporal, destino, origen);
}
