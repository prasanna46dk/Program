#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;
typedef struct Edge
{
    int src;
    int dest;
}Edge;

typedef struct graph
{
    int verticesCount;
    int edgeCount;
    Edge *edge;  
}graph;

graph *CreateGraph(int v, int e)
{
    graph *g = (graph*)malloc(sizeof(graph));
    g->verticesCount = v;
    g->edgeCount = e;

    g->edge=(Edge*)malloc(sizeof(Edge)*e);
    for (int i=0; i<e; i++)
    {
        g->edge[i].src = i;
        //to create cycle in graph
        if ((i+1) == e)
            g->edge[i].dest = g->edge[0].src;
        else 
            g->edge[i].dest = i+1;
    }
    return g;
}
int FindParent(int *parent, int i)
{
    if (-1 == parent[i])
        return i;
    FindParent(parent, parent[i]);
}

int Union(int *parent, int x, int y)
{
    int xset = FindParent(parent, x);
    int yset = FindParent(parent, y);
    parent[xset] = yset;
}

int FindCycle(graph *g)
{
   int *parent = (int*)malloc(sizeof(int) * g->verticesCount);
   memset(parent, -1, sizeof(int) * g->verticesCount);
   for (int i = 0; i < g->edgeCount; i++){
       int x = FindParent(parent, g->edge[i].src);
       int y = FindParent(parent, g->edge[i].dest);
       if (x == y)
           return 1;
       Union(parent, x,y);
   }
   return 0;
}
int main ()
{
    graph *g = CreateGraph(10, 10);
    int val = FindCycle(g);
    cout << val << endl;
}
