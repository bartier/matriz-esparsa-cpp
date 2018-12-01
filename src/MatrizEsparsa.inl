template<typename T>
MatrizEsparsa<T>::MatrizEsparsa(int linhas, int colunas, T valorPadrao) {
    this->linhas = linhas;
    this->colunas = colunas;
    this->valorPadrao = valorPadrao;
}


template<typename T>
T MatrizEsparsa<T>::getValorPadrao() {
    return this->valorPadrao;
}
