#include "../include/bib.hpp"
#include <cassert>
#include <iostream>
int main(){
    bib testando('m');
    assert(testando.mtoM() == (int) 'M');
    bib testando2('1');
    assert(testando2.mtoM() == 7);
    std::cout << "deu certo";
    return 0;
 }
//teste