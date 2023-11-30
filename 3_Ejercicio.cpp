#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {3, 10, 14, 16, 20, 23, 25, 29}
    sort(numeros.begin(), numeros.end());
    cout<< "Numeros ordenados: " << endl;
}