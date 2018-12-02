template<typename T>
Linha<T>::Linha(int linha) {
    this->linha = linha;
    this->coluna = new AVLTree<WrapperColuna<T>*>();
}

template<typename T>
int Linha<T>::getLinha() {
    return this->linha;
}

template<typename T>
AVLTree<WrapperColuna<T>*> *Linha<T>::getColuna() {
    return this->coluna;
}

template<typename T>
bool Linha<T>::operator==(const Linha &outra) {
    return this->linha == outra.getLinha();
}

template<typename T>
bool Linha<T>::operator<(const Linha &outra) {
    return this->linha < outra.getLinha();;
}
