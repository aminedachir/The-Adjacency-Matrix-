#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.c"
int main(){
    int n,m;
    char graph_type[10];
    char type_one[10] = "cycle";
    char type_two[10] = "compeleted";
    scanf("%d",&n);
    scanf("%d", &m);
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
    }
    registre_graph(n,m,arr);
    print_graph(n,m,arr);
    scanf("%s",graph_type);
    int result0 = strcmp(type_one,graph_type);
    if (result0 == 0){
        if (is_cycle_graph(n,m,arr)){
            printf("<-----------Its a cycle graph----------->\n");
        }
        else{
            printf("<-----------Its Not a cycle graph----------->\n");
        }
    }
    scanf("%s",graph_type);
    int result1 = strcmp(type_two,graph_type);
    if (result1 == 0){
        if (is_compeleted_graph(n,m,arr)){
            printf("<---------Its a compeleted graph--------->\n");
        }
        else{
            printf("<---------Its Not a completed graph--------->\n");
        }
    }
    return 0;
}