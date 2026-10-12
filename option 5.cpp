/***********************************
* Цыклы с пред- и постусловием     *
* Вариант 5                        *
* Колосков Дмитрий Викторович      *
***********************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double pi = 3.14;
  int R;
  double T, C, L, LMaxOne, LMaxTwo, executionStepOne, executionStepTwo;


  C = 0.81 * pow(10.0 , -7.0);

  cout << "Enter the resistance: "; cin >> R;
  cout << "Enter the first value L: "; cin >> L;
  cout << "Enter the L value up to which calculations should be performed in the first cycle: "; cin >> LMaxOne;
  cout << "What step should I use to perform the cycle: "; cin >> executionStepOne;
  cout << "Specify the L value up to which calculations should be performed in the second loop: "; cin >> LMaxTwo;
  cout << "What step should I use to perform the cycle: "; cin >> executionStepTwo;


  while(L <= LMaxOne) {
    T = (2000.0 * pi) / (sqrt((1.0 / (L * C)) - (pow(R / (2.0 * L), 2.0))));
    cout << "L = " << L << " T = " << T << endl;
    L += executionStepOne;
  }

  do {
    T = (2000.0 * pi) / (sqrt((1.0 / (L * C)) - (pow(R / (2.0 * L), 2.0))));
    cout << "L = " << L << " T = " << T << endl;
    L += executionStepTwo;      
  } while (L < LMaxTwo);

  return 0;
}
