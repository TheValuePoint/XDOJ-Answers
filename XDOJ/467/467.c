#include <stdio.h>
 
int main(){
    int n,o[100][100],c[100][100],j,k,i;
    scanf("%d",&n);
 
    //imput
    for(j = 0;j < n;j++){
        for (k = 0;k < n;k++){
            scanf("%d",&o[j][k]);
        }
    }
    for(j = 0;j < n;j++){
        for (k = 0;k < n;k++){
            scanf("%d",&c[j][k]);
        }
    }
 
    /*
    //debug
    for(j = 0;j < n;j++){
        for (k = 0;k < n;k++){
            printf("%d",o[k][n-j-1]);
        }
        printf("\n");
    }
    */
 
    //By finding the corresponding relationship between the images to judge
    int check[7] = {1,1,1,1,1,1,1};
    for(j = 0;j < n;j++){
        for (k = 0;k < n;k++){
            if(o[j][k] != c[j][k]){
                check[0] = 0;
            }
            if(o[j][k] != c[j+1][k+1]){
                check[1] = 0;
            }
            if(o[j][k] != c[k][n-j-1]){
                check[2] = 0;
            }
            if(o[j][k] != c[n-j-1][n-k-1]){
                check[3] = 0;
            }
            if(o[j][k] != c[n-k-1][j]){
                check[4] = 0;
            }
            if(o[j][k] != c[j][n-k-1]){
                check[5] = 0;
            }
            if(o[j][k] != c[n-j-1][k]){
                check[6] = 0;
            }
        }
    }
 
    for (i = 0;i < 7;i++){
        if(check[i] == 1) printf("%d",i);
    }
    return 0;
}
