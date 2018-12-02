#ifndef MATRIZESPARSA_LINHA_H
#define MATRIZESPARSA_LINHA_H

#include "AVLTree.h"
#include "WrapperColuna.h"

template <typename T>
class Linha {
private:
    int linha;
    AVLTree<WrapperColuna<T>*> *coluna;
public:
    Linha(int linha);

    int getLinha();
    AVLTree<WrapperColuna<T>*>* getColuna();

    bool operator== (const Linha &outra);
    bool operator< (const Linha &outra);

};

#include "Linha.inl"


#endif //MATRIZESPARSA_LINHA_H
