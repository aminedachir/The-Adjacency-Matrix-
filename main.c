#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "functions.c"
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d", &m);
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
    }
    registre_graph(n,arr);
    print_graph(n,arr);
    if (is_undirected_graph(n,arr)){printf("<-----------undirected graph----------->\n");}
    else{printf("<-----------directed graph----------->\n");}
    if (is_cycle_graph(n,arr)){printf("<-----------Its a cycle graph----------->\n");}
    else{printf("<-----------Its Not a cycle graph----------->\n");}
    if (is_compeleted_graph(n,arr)){printf("<---------Its a compeleted graph--------->\n");}
    else{printf("<---------Its Not a completed graph--------->\n");}
    if(is_Regular_graph(n,m,arr)){printf("<---------Its a regular graph--------->\n");}
    else{printf("<---------Its Not a regular graph--------->\n");}
    if(is_null_graph(n,arr)){printf("<---------Its a null graph--------->\n");}
    else{printf("<---------Its Not a null graph--------->\n");}
    if(is_Trivial_graph(n,arr)){printf("<---------Its a Trivial graph--------->\n");}
    else{printf("<---------Its Not a Trivial graph--------->\n");}
    printf("<--------------The complementary of graph is ----------->\n");
    complementary_of_graph(n,arr);
    return 0;
}