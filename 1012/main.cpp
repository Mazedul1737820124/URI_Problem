#include <iostream>

int main() {

    double A,B,C,Tri,Cri,Tra,Sqr,Rec,pi = 3.14159;

    scanf("%lf%lf%lf",&A,&B,&C);

    Tri = 0.5*A*C;
    Cri = pi*(C*C);
    Tra = (A+B)/2*C;
    Sqr = B*B;
    Rec = A*B;

    printf("TRIANGULO: %0.3lf\n",Tri);
    printf("CIRCULO: %0.3lf\n",Cri);
    printf("TRAPEZIO: %0.3lf\n",Tra);
    printf("QUADRADO: %0.3lf\n",Sqr);
    printf("RETANGULO: %0.3lf\n",Rec);
    return 0;
}