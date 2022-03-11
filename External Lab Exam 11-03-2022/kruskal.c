#include<stdio.h>

int graph[20][20],parent[20],i,j,a,b,u,v,ne = 1,n,cost = 0,min;

int find(int);
int uni(int,int);

void main(){
	printf("Enter the number of vertices: ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix \n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&graph[i][j]);
			if(graph[i][j] == 0){
				graph[i][j] = 999;
			}
		}
	}
	for(i = 0;i < n;i++){
		if(graph[i][i] == 0){
			graph[i][i] = 999;
		}
	}
	printf("----Edges----\n");
	while(ne < n){
		min=999;
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				if(graph[i][j] < min){
					min = graph[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u = find(u);
		v = find(v);
		if(uni(u,v)){
			cost += min;
			printf("%d - %d --> %d\n",a,b,graph[a][b]);
			ne++;
		}	
		graph[a][b] = graph[b][a] = 999;
	}
	printf("Minimum cost = %d\n",cost);
}

int find(int i){
	while(parent[i]){
		i = parent[i];
	}
	return i;
}

int uni(int i,int j){
	if(i != j){
		parent[j] = i;
		return 1;
	}
	return 0;
}
