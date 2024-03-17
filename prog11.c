#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10], int n, int u)
{
    int f, r, q[10], v;
    int s[10] = {0};
    printf("The nodes visited from %d:", u);
    f = 0, r = -1;
    q[++r] = u;
    s[u] = 1;
    printf("%d", u);
    while (f <= r)
    {
        u = q[f++];
        for (v = 1; v <= n; v++)
        {
            if (a[u][v] == 1)
            {
                if (s[v] == 0)
                {
                    printf("%d", v);
                    s[v] = 1;
                    q[++r] = v;
                }
            }
        }
    }
    printf("\n");
}
void main()
{
    int n, a[10][10], source, i, j;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" enter the source vertex\n");
    scanf("%d", &source);
    bfs(a, n, source);
}
