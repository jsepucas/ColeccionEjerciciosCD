#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {3, 10, 14, 16, 20, 23, 25, 29, 17};
    sort(numeros.begin(), numeros.end());
    cout<< "Numeros ordenados: " << endl;

    for(int num: numeros) {
        cout << num << endl;
    }
    cout << endl;
    auto maxElement = max_element(numeros.begin(), numeros.end());
    cout << "El numero mas alto es: " << *maxElement << endl;
    auto minElemento = min_element(numeros.begin(), numeros.end());
    cout << "El numero mas bajo es: " << *minElemento << endl;

    return 0;
}