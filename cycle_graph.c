#include <stdio.h>
int main(){
    int n;
    int s=0;
    printf("How many Vertices : ");
    scanf("%d",&n);
    int arr[n][n];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                printf("\nsi{Vertice %d, Vertice %d} in E ecrire 1 sinon 0 : ",i,j);
                scanf("%d",&arr[i][j]);
                if (arr[i][j] == 1){
                    s++;
                }
        }
    }
    if (s == n*2){
        printf("The Graph is : a Cycle graph");
    }
    else {
        printf("The Graph is : Not a Cycle graph");
    }
}