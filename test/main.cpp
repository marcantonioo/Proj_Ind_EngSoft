#include "../include/bib.hpp"
#include <cassert>
#include <iostream>
int main(){
    {
        bib a('a');
        assert(a.mtoM() == 'A');

        bib z('z');
        assert(z.mtoM() == 'Z');

        // Teste com caractere não minúsculo (deve retornar '!')
        bib excl('!');
        assert(excl.mtoM() == '!');

        bib maius('M');
        assert(maius.mtoM() == '!');

        bib numero('9');
        assert(numero.mtoM() == '!');
    }

    {
        bib A('A');
        assert(A.Mtom() == 'a');

        bib Z('Z');
        assert(Z.Mtom() == 'z');

        bib menos('-');
        assert(menos.Mtom() == '!');

        bib simbolo('$');
        assert(simbolo.Mtom() == '!');

        bib numero('5');
        assert(numero.Mtom() == '!');
    }
    
    {
        bib letra('a');
        char maiuscula = letra.mtoM();
        bib letra2(maiuscula);
        assert(letra2.Mtom() == 'a');
    }
    std::cout << "passou";
    return 0;
 }
//teste