#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "cycle_and_complete_graphs.c"
int main(){
    int n,m;
    printf("Enter the number of vertices (n): ");
    scanf("%d",&n);
    printf("Enter the number of edges (m): ");
    scanf("%d", &m);
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
    }
    matrix(n,m,arr);
    print_matrix(n,m,arr);
    if (cycle_graph(n,m,arr) == true){
        printf("Its a cycle graph\n");
    }
    else{
        printf("Its Not a cycle graph\n");
    }
    if (compeleted_graph(n,m,arr) == true){
        printf("Its a compeleted graph\n");
    }
    else{
        printf("Its Not a completed graph\n");
    }
    return 0;
}

