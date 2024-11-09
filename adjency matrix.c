#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                printf("\nsi{%d, %d} in E ecrire 1 sinon 0",i,j);
                scanf("%d",&arr[i][j]);
        }
    }
    printf("The Adjacency Matrix :\n");
    for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                printf("   %d",arr[i][j]);
        }
        printf("\n");
    }
}
