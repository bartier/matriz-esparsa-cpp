#ifndef MATRIZESPARSA_MATRIZESPARSA_H
#define MATRIZESPARSA_MATRIZESPARSA_H

#include "../AVLTree/src/AVLTree.h"
#include "Linha.h"

template <typename T>
class MatrizEsparsa {
private:
    int linhas;
    int colunas;
    T valorPadrao;
    AVLTree<Linha<T>> *linhasMatriz;
public:
    MatrizEsparsa(int linhas, int colunas, T valorPadrao);
    MatrizEsparsa(T valorPadrao);

    int getLinhas();
    int getColunas();
    T getValorPadrao();

    T get(int linha, int coluna);
    T set(int linha, int coluna, T informacaoNova);
};

#include "MatrizEsparsa.inl"

#endif //MATRIZESPARSA_MATRIZESPARSA_H
