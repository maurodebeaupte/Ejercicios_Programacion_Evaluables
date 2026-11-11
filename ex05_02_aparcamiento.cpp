#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double horas);

int main() {
   const int CLIENTES{3};
   double horas[CLIENTES];

   for (int i{0}; i < CLIENTES; ++i) {
      do {
         cout << "Horas aparcadas por el coche " << i + 1 << " (0-24): ";
         cin >> horas[i];
      } while (horas[i] < 0 || horas[i] > 24);
   }

   double totalHoras{0.0};
   double totalCobrado{0.0};

   cout << "\n" << left << setw(8) << "Car" << right << setw(8) << "Hours"
        << setw(10) << "Charge" << "\n";
   cout << fixed;

   for (int i{0}; i < CLIENTES; ++i) {
      double importe{calculateCharges(horas[i])};
      totalHoras += horas[i];
      totalCobrado += importe;

      cout << left << setw(8) << i + 1 << right << setw(8) << setprecision(1)
           << horas[i] << setw(10) << setprecision(2) << importe << "\n";
   }

   cout << left << setw(8) << "TOTAL" << right << setw(8) << setprecision(1)
        << totalHoras << setw(10) << setprecision(2) << totalCobrado << "\n";
}

double calculateCharges(double horas) {
   const double MINIMO{20.0};
   const double POR_HORA{5.0};
   const double MAXIMO{50.0};

   if (horas <= 3.0) {
      return MINIMO;
   }

   double horasExtra{ceil(horas - 3.0)};
   double importe{MINIMO + horasExtra * POR_HORA};

   if (importe > MAXIMO) {
      importe = MAXIMO;
   }

   return importe;
}
