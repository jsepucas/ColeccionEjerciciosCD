#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main() {
    auto square = [](int n) { return n * n; };
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Numeros iniciales: " << endl;
    for_each(numbers.begin(), numbers.end(), [](int n) { cout << n << " "; });
    cout << endl;