#include <stdio.h>

int main()
{
    int l,c,A[3][3],sd=0,D[3],nlinhas=2;

    for(l=0;l<3;l++){
        printf("Digite os elementos da matriz:");
        for(c=0;c<3;c++){
            printf("\nA[%d][%d]=",l,c);
            scanf("%d",&A[l][c]);
            if(c==nlinhas-l){
                D[c]=A[l][c];
                sd=sd+A[l][c];
            }
        }
    }
    printf("\n\nDiagonal principal =\n");
    for(c=0;c<3;c++)
            printf("Ds[%d] = %d\n",c,D[c]);
    printf("\n\nA soma dos elementos da diagonal principal e: %d\n",sd);

    return 0;
}
