#include "graph.h"

struct Graph {
  long num_nodes;
  Hash vertList; 
};

struct Node {
  long num_edges;
  char* label;
  Array edgeList;
};

struct Edge {
  long weight;
  Node from;
  Node dest;
};
