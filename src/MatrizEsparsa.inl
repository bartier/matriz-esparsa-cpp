template<typename T>
MatrizEsparsa<T>::MatrizEsparsa(int linhas, int colunas, T valorPadrao) {
    this->linhas = linhas;
    this->colunas = colunas;
    this->valorPadrao = valorPadrao;

    this->linhasMatriz = new AVLTree<Linha<T>>();
}

template<typename T>
int MatrizEsparsa<T>::getLinhas() {
    return this->linhas;
}

template<typename T>
int MatrizEsparsa<T>::getColunas() {
    return this->colunas;
}

template<typename T>
T MatrizEsparsa<T>::getValorPadrao() {
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

    Linha<T> linhaDoParametro(linha);
    WrapperColuna<T> colunaDoParametro(coluna);

    bool existeLinha = linhasMatriz->contains(linhaDoParametro);

    if (!existeLinha) {
        return valorPadrao;
    } else {
        Linha<T> linhaExistente = linhasMatriz->matches(linhaDoParametro);

        AVLTree<WrapperColuna<T>> *colunaExistente = linhaExistente.getColuna();

        bool existeColuna = colunaExistente->contains(colunaDoParametro);

        if (!existeColuna) {
            return valorPadrao;
        } else {
            WrapperColuna wrapperDaInformacaoBuscada = colunaExistente->matches(colunaDoParametro);
            return wrapperDaInformacaoBuscada.getInformacao();
        }
    }
}

template<typename T>
T MatrizEsparsa<T>::set(int linha, int coluna, T informacaoNova) {
    if (linha >= this->linhas || linha < 0) {
        throw std::invalid_argument("Argumento linha é inválido.");
    }

    if (coluna >= this->colunas || coluna < 0) {
        throw std::invalid_argument("Argumento coluna é inválido.");
    }

    Linha<T> linhaDoParametro(linha);
    WrapperColuna<T> wrapperColunaDoParametro(coluna);

    bool existeLinha = linhasMatriz->contains(linhaDoParametro);

    if (!existeLinha) {
        if (valorPadrao != informacaoNova) {
            Linha<T> *linhaNova = new Linha<T>(linha);

            WrapperColuna<T> *wrapperDaInformacaoNova = new WrapperColuna<T>(coluna, informacaoNova);
            linhaNova->getColuna()->insert(*wrapperDaInformacaoNova);

            linhasMatriz->insert(*linhaNova);
        }
    } else {
        Linha<T> linhaExistente = linhasMatriz->matches(linhaDoParametro);

        AVLTree<WrapperColuna<T>> *arvoreColunaExistente = linhaExistente.getColuna();

        bool existeWrapperColuna = arvoreColunaExistente->contains(wrapperColunaDoParametro);

        if (existeWrapperColuna) {
            WrapperColuna<T> wrapperExistente = arvoreColunaExistente->matches(wrapperColunaDoParametro);

            if (informacaoNova != valorPadrao) {
                wrapperExistente.setInformacao(informacaoNova);
            } else {
                arvoreColunaExistente->remove(wrapperColunaDoParametro);
            }
        } else {
            if (valorPadrao != informacaoNova) {
                WrapperColuna<T> *wrapperDaInformacaoNova = new WrapperColuna<T>(coluna, informacaoNova);
                arvoreColunaExistente->insert(*wrapperDaInformacaoNova);
            }
        }
    }
}
