#include <iostream>

#include "hello.h"

using namespace std;

int main(int argc, char const *argv[]) {
    string name;
    cout << "Please input your name " << endl;
    getline(cin, name);
    Hello h(name);
    h.sayHello();
    return 0;
}
