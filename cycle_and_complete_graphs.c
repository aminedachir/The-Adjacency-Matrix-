#include <stdio.h>
#include <stdbool.h>
int n,m;
//int *ptr;
//ptr = &arr[n][n];
void matrix(int n,int m){
    int arr[n][n];
    for (int i=0;i<n;i++){
        printf("Give me the first line in your matrix : ");
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void print_matrix(int n,int m){
    int arr[n][n];
    for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                printf("   %d",arr[i][j]);
        }
        printf("\n");
    }
}
bool cycle_graph(int n){
    int arr[n][n];
    int s=0;
    matrix(n,m);
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

bool compeleted_graph(int n){
    int arr[n][n];
    int m=0;
    for (int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n;j++){
                printf("\nsi{Vertice %d, Vertice %d} in E ecrire 1 sinon 0 : ",i+1,j+1);
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
        return true ;
    }
    else {
        return false;
    }
}
