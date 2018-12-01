#include <iostream>
#include "MatrizEsparsa.h"

using namespace std;

int main() {

    MatrizEsparsa<int> *matrizTeste = new MatrizEsparsa<int>(10, 10, -1);

    cout << matrizTeste->getValorPadrao() << endl;

    return 0;
}