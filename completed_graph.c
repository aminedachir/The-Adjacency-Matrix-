#include <stdio.h>
int main(){
    int n;
    int m=0;
    printf("How many Vertices : ");
    scanf("%d",&n);
    int arr[n][n];
    for (int i=1;i<=n;i++){
        int s=0;
        for(int j=1;j<=n;j++){
                printf("\nsi{Vertice %d, Vertice %d} in E ecrire 1 sinon 0 : ",i,j);
                scanf("%d",&arr[i][j]);
                if (arr[i][j] == 1){
                    s++;
                }
        }
        if (s == n-1){
            m++;
        }
    }
    if (m == n){
        printf("The Graph is : a Completed graph");
    }
    else {
        printf("The Graph is : Not a Completed graph");
    }
}
