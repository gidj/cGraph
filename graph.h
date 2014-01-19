#include <stdbool.h>

#ifndef GRAPH_H_
#define GRAPH_H_

typedef struct Graph *Graph;
typedef struct Node *Node;
typedef struct Edge *Edge;

extern Graph graph_new();
extern Node graph_add_vertex(Graph g, Node v);
extern void graph_add_edge(Graph g, Node f_ver, Node t_ver, int weight);

extern Node vertex_get(Graph g, Node v);
extern bool graph_has_vertex(Graph g, Node v);

#endif
