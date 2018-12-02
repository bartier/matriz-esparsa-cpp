#include <iostream>
#include "MatrizEsparsa.h"

using namespace std;

int main() {

    MatrizEsparsa<int> *matrizTeste = new MatrizEsparsa<int>(10, 10, -1);

    cout << matrizTeste->getValorPadrao() << endl;

    cout << matrizTeste->get(0,0) << endl;
    cout << matrizTeste->get(1,2) << endl;
    cout << matrizTeste->get(2,2) << endl;
    cout << matrizTeste->get(5,6) << endl;
    cout << matrizTeste->get(7,2) << endl;

    return 0;
}