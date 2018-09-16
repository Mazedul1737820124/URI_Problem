#include <stdio.h>

int main() {

    int a,b;
    double re;
    scanf("%d%d",&a,&b);

    re =((float)b/12 + a);

    printf("%0.3lf",re);
    return 0;
}