#include "../include/bib.hpp"
    char bib::mtoM () {
        if (m < 97 || m > 122)
            return 33;
        return m-32;
    }
    char bib::Mtom() {
        if (m > 90 || m < 65)
            return 33;
        return m+32;
    }
    bib::bib(char m){
        this->m = m;
    }


