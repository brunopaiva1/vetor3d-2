// Incluir na classe vetor3d do exercício anterior uma função-membro denominada normamax 
// que permita obter a maior norma de dois vetores. 
// (Nota: A norma deumvetorv=x,y,zéx2+y2+z2outambém x*x+y*y+z*z

#ifndef VETOR3D_H
#define VETOR3D_H

class Vetor3d{
    private:
    float x;
    float y;
    float z;

    public:
    Vetor3d(float x, float y, float z);
    void setVetor(float xx, float yy, float zz);
    void igual(Vetor3d& a);
    float normamax(Vetor3d& a);
};

#endif //VETOR3D_H
