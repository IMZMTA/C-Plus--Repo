//BFS

#include <stdio.h>
#include <conio.h>
using namespace std;
void distance(int, int);
int a[10][10];

int main()
{
    int i, j, n;
    printf("\nEnter the number of vertices in the diagraph:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    for (i = 1; i <= n; i++)
    {
        printf("The starting vertex is %d\n", i);
        distance(i, n);
        printf("Press enter for other source vertex\n");
        getch();
    }
}
void distance(int v, int n)
{
    int queue[40], visited[20], dis[20], front, rear, i, j;
    for (i = 1; i <= n; i++)
        visited[i] = dis[i] = 0;
    front = rear = 0;
    queue[rear++] = v;
    visited[v] = 1;
    do
    {
        i = queue[front++];
        for (j = 1; j <= n; j++)
            if (a[i][j] && !visited[j])
            {
                dis[j] = dis[i] + 1;
                queue[rear++] = j;
                visited[j] = 1;
                printf("The vertex %d to %d is of distance=%d\n", v, j, dis[j]);
            }
    } while (front < rear);
}