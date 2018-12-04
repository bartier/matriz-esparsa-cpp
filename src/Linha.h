#ifndef MATRIZESPARSA_LINHA_H
#define MATRIZESPARSA_LINHA_H

#include "../AVLTree/src/AVLTree.h"
#include "WrapperColuna.h"

template <typename T>
class Linha {
private:
    int linha;
    AVLTree<WrapperColuna<T>> *coluna;
public:
    Linha();
    Linha(int linha);

    int getLinha();
    AVLTree<WrapperColuna<T>>* getColuna();

    bool operator== (const Linha &outra);
    bool operator!=(const Linha &outra);
    bool operator< (const Linha &outra);
    bool operator> (const Linha &outra);

    template <class U>
    friend std::ostream& operator<<(std::ostream& os, Linha<U> linha);

};

#include "Linha.inl"


#endif //MATRIZESPARSA_LINHA_H
