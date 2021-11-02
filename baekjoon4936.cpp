#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int map[51][51];
int visited[51][51];
int dx[] = { 0,1,1,1,0,-1,-1,-1 };
int dy[] = { 1,1,0,-1,-1,-1,0,1 };
int count = 0;

void reset()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			map[i][j] = 0;
			visited[i][j] = 0;
			count = 0;
		} 
	}
}

void DFS(int y,int x)
{
	visited[y][x] = 1;
	int tempX, tempY;
	for (int i = 0; i < 8; i++)
	{
		tempX = x + dx[i];
		tempY = y + dy[i];
		if (map[tempY][tempX] == 1 && visited[tempY][tempX] != 1)
		{
			//printf("DFSÀÌµ¿ %d %d\n", tempY, tempX);
			visited[tempY][tempX] = 1;
			DFS(tempY, tempX);
		}
	}
	return;
}
int main()
{
	int exit = 1;
	int w, h;

	while (exit)
	{
		reset();

		scanf("%d %d", &w, &h);

		if (w == 0 && h == 0)
		{
			exit = 0;
			break;
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				scanf("%d", &map[i][j]);
			}
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (map[i][j] == 1 && visited[i][j] != 1)
				{
					//printf("count ++ %d %d\n", i, j);
					count++;
					DFS(i, j);
				}
			}
		}
		printf("%d\n", count);
	}

	return 0;
}