	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>

	int visited[101];

	typedef struct GraphType {
		int n;
		int adj_mat[101][101];
	}GraphType;

	void init(GraphType *g)
	{
		g->n = 0;
		int r, c;
		for (r = 1; r <= 100; r++)
		{
			for (c = 1; c <= 100; c++)
			{
				g->adj_mat[r][c] = 0;
			}
		}
	}

	void insert_vertex(GraphType* g, int v)
	{
		if ( ((g->n)+1) > 100 )
		{
			printf("정점 갯수 초과\n");
			return;
		}
		g->n++;
	}

	void insert_edge(GraphType* g, int start, int end)
	{
		if (start > g->n || end > g->n)
		{
			printf("정점 번호 오류\n");
			return;
		}
		g->adj_mat[start][end] = 1;
		g->adj_mat[end][start] = 1;

	}

	void print_adj_mat(GraphType* g)
	{
		for (int i = 1; i <= g->n; i++)
		{
			for (int j = 1; j <= g->n; j++)
			{
				printf("%2d ", g->adj_mat[i][j]);
			}
			printf("\n");
		}
	}
	void dfs_mat(GraphType* g, int v)
	{
		int w;
		visited[v] = 1;
		//printf("정점%d -> ", v);
	
		for (w = 1; w <= g->n; w++)
		{
			if (g->adj_mat[v][w] == 1 && visited[w] != 1)
			{
				dfs_mat(g, w);
			}
		}	
	
	}

	int main()
	{
		GraphType *g;
		int computer, fair;
		int start, end;
		int result = 0;
		g = (GraphType *)malloc(sizeof(GraphType));
		init(g);
	
		scanf("%d", &computer);
		scanf("%d", &fair);
	

		for (int i = 1; i <= computer; i++)
		{
			insert_vertex(g, computer);
			visited[i] = 0;
		}

		for (int i = 1; i <= fair; i++)
		{
			scanf("%d %d", &start, &end);
			insert_edge(g, start, end);
		}	


		dfs_mat(g, 1);

		for (int i = 2; i <= g->n; i++)
		{
			result += visited[i];	
		}
	
		printf("%d", result);
	}
