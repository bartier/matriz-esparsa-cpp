#ifndef MATRIZESPARSA_WRAPPERCOLUNA_H
#define MATRIZESPARSA_WRAPPERCOLUNA_H

template <typename T>
class WrapperColuna {
private:
    int coluna;
    T informacao;
public:
    int getColuna();
    T getInformacao();

    void setInformacao(T informacaoAtualizada);
};

#include "WrapperColuna.inl"


#endif //MATRIZESPARSA_WRAPPERCOLUNA_H
