#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "cycle_and_complete_graphs.c"
int main(){
    int n,m;
    scanf("%d    %d",&n,&m);
    int arr[n][n];
    matrix(n,m);
    print_matrix(n,m);
    if (cycle_graph(n) == true){
        printf("Its a cycle graph");
    }
    else{
        printf("Its Not a cycle graph");
    }
    if (compeleted_graph(n) == true){
        printf("Its a compeleted graph");
    }
    else{
        printf("Its Not a completed graph");
    }
    return 0;
}

