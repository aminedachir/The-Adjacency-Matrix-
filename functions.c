#include <stdio.h>
#include <stdbool.h>
int n,m;
void registre_graph(int n,int **arr){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
}
void print_graph(int n,int **arr){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
bool is_undirected_graph(int n,int **arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != arr[j][i]){
                return false;
            }
        }
        return true;
    }
}
bool is_cycle_graph(int n,int **arr){
    int s=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == 1){
                s++;
          }
        }
    }
    if (s == n*2){return true ;}
    else {return false;}
}
bool is_compeleted_graph(int n,int **arr){
    int d=0;
    for (int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n;j++){
                if (arr[i][j] == 1){
                    s++;
                }
        }
        if (s == n-1){
            d++;
        }
    }
    if (d == n){return true ;}
    else {return false;}
}
bool is_Regular_graph(int n,int m,int **arr){
    int degree = 0;
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1){
                degree++;
            }
        }
        if(m/degree == n){
            s++;
        }
    }
    if(s==n){return true;}
    else{return false;}
}
bool is_null_graph(int n,int **arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1){
                return false;
            }
        }
        return true;
    }
}
bool is_Trivial_graph(int n,int **arr){
    if (n == 1 && arr[0][0]!=1){return true;}
    else{return false;}
}
void complementary_of_graph(int n,int **arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i][j] == 0){arr[i][j] = 1;}
                else{arr[i][j] = 0;}
            }
        }
    }
    print_graph(n,arr);
}