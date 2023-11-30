#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    numeros.push_back (29);
    numeros.push_back (33);
    numeros.push_back (16);

    for(vector<int>::iterator i = numeros.begin(); i != numeros.end(); i++) {
        cout << *i << endl;

    }

    return 0;
}
