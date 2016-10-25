//
// Created by DannyLo on 25.10.2016.
//
#include <iostream>
#include "big_integer.h"

int main() {
    SeComLib::Core::BigInteger i(3);
    SeComLib::Core::BigInteger j(3);
    std::cout << i.ToString(10) << " == " << j.ToString(10) << " :  "
              << (i == j ? "true" : "false") << std::endl;
}
