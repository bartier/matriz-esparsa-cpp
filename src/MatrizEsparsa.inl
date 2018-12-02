template<typename T>
MatrizEsparsa<T>::MatrizEsparsa(int linhas, int colunas, T valorPadrao) {
    this->linhas = linhas;
    this->colunas = colunas;
    this->valorPadrao = valorPadrao;

    this->linhasMatriz = new AVLTree<Linha<T>*>();
}

template<typename T>
int MatrizEsparsa<T>::getLinhas() const {
    return this->linhas;
}

template<typename T>
int MatrizEsparsa<T>::getColunas() const {
    return this->colunas;
}

template<typename T>
T MatrizEsparsa<T>::getValorPadrao() const {
    return this->valorPadrao;
}

template<typename T>
T MatrizEsparsa<T>::get(int linha, int coluna) {
    if (linha >= this->linhas || linha < 0) {
        throw std::invalid_argument("Argumento linha é inválido.");
    }

    if (coluna >= this->colunas || coluna < 0) {
        throw std::invalid_argument("Argumento coluna é inválido.");
    }

    Linha<T> *linhaDoParametro = new Linha<T>(linha);
    WrapperColuna<T>* colunaDoParametro = new WrapperColuna<T>(coluna);

    Linha<T> *linhaRetornada = linhasMatriz->contains(linhaDoParametro);

    if (!linhaRetornada) {
        return valorPadrao;
    } else {
        AVLTree<WrapperColuna<T>*> *colunaRetornada = linhaRetornada->getColuna();

        if (!colunaRetornada) {
            return valorPadrao;
        } else {
            WrapperColuna<T> *wrapperDaInformacaoBuscada = colunaRetornada->contains(colunaDoParametro);
            return wrapperDaInformacaoBuscada->getInformacao();
        }
    }
}

template<typename T>
T MatrizEsparsa<T>::set(int linha, int coluna, T informacao) {
    throw "implementa ae";
}
