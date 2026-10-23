#include <stdio.h>

// Practical 9: Graph Traversal for Campus Navigation using BFS and DFS

#define MAX 10
int graph[MAX][MAX], visited[MAX], n;
void DFS(int v) {
    printf("%d ", v); visited[v] = 1;
    for (int i = 0; i < n; i++) if (graph[v][i] && !visited[i]) DFS(i);
}
void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    for (int i = 0; i < n; i++) visited[i] = 0;
    queue[rear++] = start; visited[start] = 1;
    while (front < rear) {
        int v = queue[front++]; printf("%d ", v);
        for (int i = 0; i < n; i++) if (graph[v][i] && !visited[i]) { queue[rear++] = i; visited[i] = 1; }
    }
}
int main(void) {
    int e, u, v, start;
    printf("Enter number of buildings (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { printf("Invalid number of buildings.\n"); return 1; }
    printf("Enter number of paths: "); scanf("%d", &e);
    if (e < 0 || e > n * (n - 1) / 2) { printf("Invalid number of paths.\n"); return 1; }
    printf("Enter each path as two building indices (0 to %d):\n", n-1);
    for (int i = 0; i < e; i++) {
        if (scanf("%d%d", &u, &v) != 2 || u < 0 || u >= n || v < 0 || v >= n) { printf("Invalid path.\n"); return 1; }
        graph[u][v] = graph[v][u] = 1;
    }
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) printf("%d ", graph[i][j]); printf("\n"); }
    printf("Enter starting building: "); scanf("%d", &start);
    if (start < 0 || start >= n) { printf("Invalid starting building.\n"); return 1; }
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS: "); DFS(start); printf("\nBFS: "); BFS(start); printf("\n");
    return 0;
}
