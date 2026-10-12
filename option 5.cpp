/******************************
* Цыклы с пред- и постусловием*
* Вариант 5                   *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const double pi = 3.14;
  const double C =0.81 * pow(10,-7);
  int R; // = 1530
  double L = 0.05;
  double T;

  cout << "Enter the resistance: ";
  cin >> R;

  while(L <= 0.09) {
    T = (2000.0 * pi) / (sqrt((1/(L * C)) - (pow(R / (2 * L), 2))));
    cout << "L = " << L << " T = " << T << endl;
    L += 0.01;
  }

  do {
    T = (2000.0 * pi) / (sqrt((1/(L * C)) - (pow(R / (2 * L), 2))));
    cout << "L = " << L << " T = " << T << endl;
    L += 0.1;      
  } while(L < 0.6);

  return 0;

}
