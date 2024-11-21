#include <stdio.h>
#include <stdbool.h>
int n,m,x;
void registre_graph(int n,int m,int **arr){
    for (int i=0;i<n;i++){
        //printf("Give me the %d line in your matrix : ",i+1);
        for(int j=0;j<m;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
}
void print_graph(int n,int m,int **arr){
    for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
bool is_cycle_graph(int n,int m,int **arr){
    int s=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == 1){
                s++;
          }
        }
    }
    if (s == n*2){
        return true ;
    }
    else {
        return false;
    }
}
bool is_compeleted_graph(int n,int m,int **arr){
    int d=0;
    for (int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n;j++){
                //printf("\nsi{Vertice %d, Vertice %d} in E ecrire 1 sinon 0 : ",i+1,j+1);
                //scanf("%d",&arr[i][j]);
                if (arr[i][j] == 1){
                    s++;
                }
        }
        if (s == n-1){
            d++;
        }
    }
    if (m == n){
        return true ;
    }
    else {
        return false;
    }
}
