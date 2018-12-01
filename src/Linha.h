#ifndef MATRIZESPARSA_LINHA_H
#define MATRIZESPARSA_LINHA_H

#include "AVLTree.h"
#include "WrapperColuna.h"

template <typename T>
class Linha {
private:
    int linha;
    AVLTree<WrapperColuna<T>> coluna;
};

#include "Linha.inl"


#endif //MATRIZESPARSA_LINHA_H
