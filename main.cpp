// Incluir na classe vetor3d do exercício anterior uma função-membro denominada normamax 
// que permita obter a maior norma de dois vetores. 
// (Nota: A norma deumvetorv=x,y,zéx2+y2+z2outambém x*x+y*y+z*z

#include <iostream>
#include "Vetor3d.h"

using namespace std;

int main(){
    Vetor3d a(0, 0, 0);
    Vetor3d b(0, 2, 0);
    float maiorNorma = a.normamax(b);
    a.igual(b);

    cout << "A maior norma entre os vetores a e b: " << maiorNorma << endl;
}