#define MAXV 1000

typedef struct {
  int y;
  int weight;
  struct edgenode *next;
} edgenode;

typedef struct {
  int nvertices;
  edgenode *edges[MAXV + 1];
} graph;

void graph_insert(*graph, int x, int y);
void graph_print(*graph, int x, int y);

