#include <stdio.h>

int main() {

    int N,ar[] = {100,50,20,10,5,2,1},ar1[7];

    scanf("%d",&N);

    printf("%d\n",N);
    for (int i = 0; i < 7; ++i) {

        ar1[i] = N / ar[i];
        N = N % ar[i];
    }

    for (int j = 0; j < 7 ; ++j) {

        printf("%d nota(s) de R$ %d,00\n",ar1[j],ar[j]);
    }


    return 0;
}
