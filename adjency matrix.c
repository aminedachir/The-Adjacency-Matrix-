#include <stdio.h>

int n,m;
int arr[10][10];

void adjency_matrix(int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            printf("\nsi{%d, %d} in E ecrire 1 sinon 0 : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

void incidence_matrix(int n,int m){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                printf("\nsi{%d, Edge%d} in E ecrire 1 sinon 0 : ",i+1,j+1);
                scanf("%d",&arr[i][j]);
        }
    }
}

void print_incidence_matrix(int n,int m){
    for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                printf("   %d",arr[i][j]);
        }
        printf("\n");
    }
}

void print_adjency_matrix(int n){
    for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                printf("   %d",arr[i][j]);
        }
        printf("\n");
    }
}

void cycle_graph(int n){
    int s=0;
    adjency_matrix(n);
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == 1){
                s++;
          }
        }
    }
    if (s == n*2){
        printf("The Graph is : a Cycle graph\n");
    }
    else {
        printf("The Graph is : Not a Cycle graph\n");
    }
}

void compeleted_graph(int n){
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
        printf("The Graph is : a Completed graph\n");
    }
    else {
        printf("The Graph is : Not a Completed graph\n");
    }

}

int main(){
    scanf("%d",&n);
    adjency_matrix(n);
    printf("The Adjacency Matrix :\n");
    print_adjency_matrix(n);
    scanf("%d",&m);
    incidence_matrix(n,m);
    printf("The Incidence Matrix :\n");
    print_incidence_matrix(n,m);
    printf("<<< Cycle Graphe or note ?? >>>>\n");
    cycle_graph(n);
    printf("<<< Compeleted Graphe or note ?? >>>>\n");
    compeleted_graph(n);

}
