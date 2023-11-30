#include <iostream>
#include <list>
#include <stack>

int main () {
    std::list<double> decimalList;

    decimalList.push_back (3.1416);
    decimalList.push_back (2.7182);
    decimalList.push_back (1.6180);

    std::stack<double, std::list<double> > decimalStack (decimalList);

    std::cout << "Elemento top: " << decimalStack.top() << std::endl;
    decimalStack.pop();

    std::cout << "Nuevo elemento despues del pop: " << decimalStack.top() << std::endl;

    decimalStack.push (1.4142);
    std::cout << "Elemento top despues del push: " << decimalStack.top() << std::endl;

    return 0;

}
