#include <stdio.h>
#define MAX 100

void dfs(int adjMatrix[MAX][MAX], int visited[MAX], int vertex, int numVertices) {
    printf("Visited %d\n", vertex);
    visited[vertex] = 1;
    
    for (int i = 0; i < numVertices; i++) {
        if (adjMatrix[vertex][i] == 1 && !visited[i]) {
            dfs(adjMatrix, visited, i, numVertices);
        }
    }
}

int main() {
    int numVertices = 6;
    int adjMatrix[MAX][MAX] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 1, 0},
        {1, 1, 0, 0, 1, 0},
        {0, 1, 0, 0, 1, 1},
        {0, 1, 1, 1, 0, 1},
        {0, 0, 0, 1, 1, 0}
    };
    int visited[MAX] = {0};
    
    dfs(adjMatrix, visited, 0, numVertices);
    
    return 0;
}
