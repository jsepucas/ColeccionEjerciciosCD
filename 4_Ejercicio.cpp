#include <iostream>
#include <valarray>
#include <cmath>

using namespace std;

int main() {

 valarray<double> nums = {2.9, 3.0, 3.1, 3.2, 4.1};

 valarray<double> suma = nums + 10.0;
 valarray<double> resta = nums - 5.0;
 valarray<double> multiplicacion = nums * 2.0;
 valarray<double> division = nums / 2.0;
 valarray<double> raizCuadrada = sqrt(nums);


 cout << "Numeros iniciales: ";
 for (double num : nums) cout << num << " ";
 cout << endl;

 cout << "Suma: ";
 for (double num : suma) cout << num << " ";
 cout << endl;

 cout << "Multiplicacion: ";
 for (double num : multiplicacion) cout << num << " ";
 cout << endl;

 cout << "Resta: ";
 for (double num : resta) cout << num << " ";
 cout << endl;

 cout << "Division: ";
 for (double num : division) cout << num << " ";
 cout << endl;


