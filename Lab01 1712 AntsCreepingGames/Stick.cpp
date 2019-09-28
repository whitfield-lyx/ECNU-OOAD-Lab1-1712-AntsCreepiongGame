#include "Stick.h"

using namespace std;

Stick::Stick(){
    length = 300;
}

Stick::Stick(int length){
    this->length = length;
}

int Stick::getLength(){
    return length;
}
