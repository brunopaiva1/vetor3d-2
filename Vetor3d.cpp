// Incluir na classe vetor3d do exercício anterior uma função-membro denominada normamax 
// que permita obter a maior norma de dois vetores. 
// (Nota: A norma deumvetorv=x,y,zéx2+y2+z2outambém x*x+y*y+z*z

#include <iostream>
#include "Vetor3d.h"

using namespace std;

Vetor3d::Vetor3d(float x, float y, float z){
    setVetor(x, y, z);
}

void Vetor3d::setVetor(float xx, float yy, float zz){
    x = xx;
    y = yy;
    z = zz;
}

void Vetor3d::igual(Vetor3d& a){
    if(a.x == x and a.y == y and a.z == z){
        cout << "Os vetores das coordenadas são iguais" << endl;
    }else {
        cout << "Os vetores das coordenadas são diferentes" << endl;
    }
}

float Vetor3d::normamax(Vetor3d& a){
    float normaA = (x*x)+(y*y)+(z*z);
    float normaB = (a.x*a.x)+(a.y*a.y)+(a.z*a.z);
    float maiorNorma;

    return (normaA > normaB ? maiorNorma = normaA:maiorNorma=normaB);
}