#include <stdio.h>
int main(){
    int n,m;
    printf("How many Vertices : ");
    scanf("%d",&n);
    printf("How many Edges : ");
    scanf("%d",&m);
    int arr[n][m];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                printf("\nsi{%d, Edge%d} in E ecrire 1 sinon 0 : ",i,j);
                scanf("%d",&arr[i][j]);
        }
    }
    printf("The Incidence Matrix :\n");
    for (int i = 1;i<=n;i++){
            for (int j = 1;j<=m;j++){
                printf("   %d",arr[i][j]);
        }
        printf("\n");
    }
}
