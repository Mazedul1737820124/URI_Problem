#include <stdio.h>

int main() {

    int X;
    double Y,Result;

    scanf("%d%lf",&X,&Y);
    Result = X/Y;

    printf("%0.3lf km/l\n",Result);
    return 0;
}