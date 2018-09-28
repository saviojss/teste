


#include <stdio.h>
#include <stdlib.h>

int l1, c1, l2, c2, i, j, k, produto;
int main (){
    
    scanf("%d",&l1);
    scanf("%d",&c1);
    int m1[l1][c1];
    for (i=0;i<l1;i++){
        for(j=0; j<c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    
    scanf("%d",&l2);
    scanf("%d",&c2);
    int m2[l2][c2];
    for (i=0;i<l2;i++){
        for(j=0; j<c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
        if(c1==l2 || c2==l1){
            int m3[99][99]={0};
            for (i=0;i<l1;i++){
                for (j=0;j<c2; j++){
                    for (k=0;k<l2;k++){
                        produto += m1[i][k]*m2[k][j];
                    }
                    m3[i][j]=produto;
                    produto = 0;
                }
            }
            for (i=0;i<l1;i++){
                for (j=0;j<c2;j++){
                    printf("%d ", m3[i][j]);
                }
                printf("\n");
            }
        }
        else {
            printf("0"); }
    return 0;
}
