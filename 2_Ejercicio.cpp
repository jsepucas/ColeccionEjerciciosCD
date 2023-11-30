#include <iostream>
#include <list>
#include <stack>

int main () {
    std::list<double> decimalList;

    decimalList.push_back (3.1416);
    decimalList.push_back (2.7182);
    decimalList.push_back (1.6180);

    std::stack<double, std::list<double> > decimalStack (decimalList);

    std::cout << "Top element: " << decimalStack.top() << std::endl;
    decimalStack.pop();

    std::cout << "New top element after pop: " << decimalStack.top() << std::endl;

    decimalStack.push (1.4142);
    std::cout << "Top element after push: " << decimalStack.top() << std::endl;

}
