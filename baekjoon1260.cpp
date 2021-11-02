#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int visit[1001] = { 0, };
int visit2[1001]{ 0, };



typedef struct GraphType
{
	int n;
	int adj_mat[1001][1001];
};

void init(GraphType *g)
{
	g->n = 0;
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			g->adj_mat[i][j] = 0;
		}
	}
}

void insert_vertex(GraphType *g)
{
	if (g->n > 1000)
	{
		printf("���� ���� �ʰ�\n");
		return;
	}
	g->n++;
}

void insert_edge(GraphType *g, int start, int end)
{
	if (start > 1000 || end > 1000)
	{
		printf("���� ��ȣ ����\n");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;
}

void dfs_mat(GraphType *g, int v)
{
	visit[v] = 1;
	printf("%d ", v);
	for (int w = 1; w <= g->n; w++)
	{
		if (visit[w] != 1 && g->adj_mat[v][w] == 1)
		{
			//printf("dfs ��� �Լ� ���� %d -> %d\n", v, w);
			dfs_mat(g, w);
		}
	}

}


void BFS(int s,GraphType *g)
{
	queue<int> q;
	int now, next;
	visit2[s] = 1;
	printf("%d ", s);
	q.push(s);	
	
	while (!q.empty())
	{
		//printf("while�� ����\n");
		now = q.front();
		q.pop();
		//printf("now ��(queue���� ���� ��) = %d\n", now);
		
		for (int k = 1; k <= g->n; k++)
		{
			if (g->adj_mat[now][k] == 1 && visit2[k] !=1)
			{
				visit2[k] = 1;
				printf("%d ", k);
				q.push(k);
			}
			
		}
	}
}

int main()
{
	int vertexNum, edgeNum, startVertex;
	int start, end;

	GraphType *g;
	g = (GraphType*)malloc(sizeof(GraphType));
	init(g);
	
	scanf("%d %d %d", &vertexNum, &edgeNum, &startVertex);

	for (int i = 0; i < vertexNum; i++)
	{
		insert_vertex(g);
	}
	for (int i = 0; i < edgeNum; i++)
	{
		scanf("%d %d", &start, &end);
		insert_edge(g, start, end);
	}
	dfs_mat(g, startVertex);

	printf("\n");
	
	BFS(startVertex,g);

	//printf("vertex ���� = %d", g->n);

}


