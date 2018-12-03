template<typename T>
WrapperColuna<T>::WrapperColuna() {
    this->coluna = -1;
}

template<typename T>
WrapperColuna<T>::WrapperColuna(int coluna, T informacao) {
    this->coluna = coluna;
    this->informacao = informacao;
}

template<typename T>
WrapperColuna<T>::WrapperColuna(int coluna) {
    this->coluna = coluna;
}

template<typename T>
int WrapperColuna<T>::getColuna() {
    return this->coluna;
}

template<typename T>
T WrapperColuna<T>::getInformacao() {
    return this->informacao;
}

template<typename T>
void WrapperColuna<T>::setInformacao(T informacaoAtualizada) {
    this->informacao = informacaoAtualizada;
}

template<typename T>
bool WrapperColuna<T>::operator==(const WrapperColuna &outro) {
    return this->coluna == outro.coluna;
}

template<typename T>
bool WrapperColuna<T>::operator!=(const WrapperColuna &outro) {
    return this->coluna != outro.coluna;
}

template<typename T>
bool WrapperColuna<T>::operator<(const WrapperColuna &outro) {
    return this->coluna < outro.coluna;
}

template<typename T>
bool WrapperColuna<T>::operator>(const WrapperColuna &outro) {
    return this->coluna > outro.coluna;
}

template<class U>
std::ostream &operator<<(std::ostream &os, WrapperColuna<U> wrapper) {
    os <<  wrapper.coluna << " '" << wrapper.informacao << "'";
    return os;
}
