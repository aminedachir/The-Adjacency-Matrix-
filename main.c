#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.c"
int main(){
    int n,m;
    char graph_type[10];
    char type_one[15] = "undirected";
    char type_two[10] = "directed";
    scanf("%d",&n);
    scanf("%d", &m);
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
    }
    registre_graph(n,m,arr);
    print_graph(n,m,arr);
    scanf("%s",graph_type);
    int result = strcmp(graph_type,type_one);
    int result_two = strcmp(graph_type,type_two);
    if (result == 0)
    {
        if (is_cycle_graph(n,m,arr)){
        printf("<-----------Its a cycle graph----------->\n");
            }
        else{
            printf("<-----------Its Not a cycle graph----------->\n");
        }
        if (is_compeleted_graph(n,m,arr)){
            printf("<---------Its a compeleted graph--------->\n");
        }
        else{
            printf("<---------Its Not a completed graph--------->\n");
        }
    }
    else if (result_two == 0)
    {
        printf("soon\n");
    }else{
        printf("invalid type of graph must be directed or undirected\n");
    }
    return 0;
}