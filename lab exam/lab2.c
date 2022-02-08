#include<stdio.h>

#define N 1000
int graph[N][N], visited[N], n;

void dfs(int);

void main(){
    int i, j, k, l;
    printf("Enter the number of vertices : ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix : \n");
    for(i = 0,k = 65; i < n; i++, k++)
    {
        for(j = 0, l= 65;  j < n; j++, l++){
            printf("Enter the edge weight of %c to %c ",k,l);
            scanf("%d",&graph[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        visited[i] = 0;
    }
    dfs(0);
}

void dfs(int i){
    int j, k;
    for(j = 0,k = 65; j < n; j++, k++){
        if(j==i){
            printf("%c\t",k);
        }
    }
    visited[i]=1;
    for(j = 0; j < n; j++){
        if(!visited[j] && graph[i][j] == 1){
            dfs(j);
        }
    }
}















