#ifndef MATRIZESPARSA_WRAPPERCOLUNA_H
#define MATRIZESPARSA_WRAPPERCOLUNA_H

template <typename T>
class WrapperColuna {
private:
    int coluna;
    T informacao;
public:
    WrapperColuna(int coluna, T informacao);
    WrapperColuna(int coluna);

    int getColuna();
    T getInformacao();

    void setInformacao(T informacaoAtualizada);

    bool operator== (const WrapperColuna &outro);
    bool operator< (const WrapperColuna &outro);
};

#include "WrapperColuna.inl"


#endif //MATRIZESPARSA_WRAPPERCOLUNA_H
