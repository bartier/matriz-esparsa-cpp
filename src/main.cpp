#include <iostream>
#include "MatrizEsparsa.h"

using namespace std;

int main() {

    MatrizEsparsa<int> *matrizTeste = new MatrizEsparsa<int>(10, 10, -1);

    cout << "Valor padrao: " << matrizTeste->getValorPadrao() << endl;

    matrizTeste->set(0,0, 1);
    matrizTeste->set(1,2, 2);
    matrizTeste->set(2,2, 3);
    matrizTeste->set(5,6, 4);
    matrizTeste->set(7,2, 5);
    matrizTeste->set(7,3, 6);

    cout << matrizTeste->get(0,0) << endl;
    cout << matrizTeste->get(1,2) << endl;
    cout << matrizTeste->get(2,2) << endl;
    cout << matrizTeste->get(5,6) << endl;
    cout << matrizTeste->get(7,2) << endl;
    cout << matrizTeste->get(7,3) << endl;

    return 0;
}