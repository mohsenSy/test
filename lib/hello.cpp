#include <iostream>
#include <stdlib.h>
#include <string>

#include "hello.h"


using namespace std;

Hello::Hello(string name){
    this->name = name;
}

void Hello::sayHello(){
    cout << "Hello " << name << endl;
}

Hello::~Hello(){}
