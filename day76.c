#include <stdio.h>
#include <stdlib.h>

int visited[1001];
int* adj[1001];
int size[1001];

void addEdge(int u, int v) {
    adj[u] = realloc(adj[u], (size[u] + 1) * sizeof(int));
    adj[u][size[u]++] = v;

    adj[v] = realloc(adj[v], (size[v] + 1) * sizeof(int));
    adj[v][size[v]++] = u;
}

void dfs(int node) {
    visited[node] = 1;
    for (int i = 0; i < size[node]; i++) {
        int next = adj[node][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        adj[i] = NULL;
        size[i] = 0;
        visited[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}