#include <iostream>
using namespace std;

int main() {
   int count{1};

   while (count <= 10) {
      cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
      ++count;
   }
}
