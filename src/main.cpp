#include <iostream>
#include "../include/bib.hpp"



int main(){
    bib teste('a');  
    std::cout << teste.mtoM() << std::flush;
    std::cout << "deu certo" << std::endl;
    return 0;
}