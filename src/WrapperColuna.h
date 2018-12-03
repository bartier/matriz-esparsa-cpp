#ifndef MATRIZESPARSA_WRAPPERCOLUNA_H
#define MATRIZESPARSA_WRAPPERCOLUNA_H

#include <iostream>

template <typename T>
class WrapperColuna {
private:
    int coluna;
    T informacao;
public:
    WrapperColuna();
    WrapperColuna(int coluna, T informacao);
    WrapperColuna(int coluna);

    int getColuna();
    T getInformacao();

    void setInformacao(T informacaoAtualizada);

    bool operator== (const WrapperColuna &outro);
    bool operator!=(const WrapperColuna &outro);
    bool operator< (const WrapperColuna &outro);
    bool operator> (const WrapperColuna &outro);

    template <class U>
    friend std::ostream& operator<<(std::ostream& os, WrapperColuna<U> wrapper);
};

#include "WrapperColuna.inl"


#endif //MATRIZESPARSA_WRAPPERCOLUNA_H
