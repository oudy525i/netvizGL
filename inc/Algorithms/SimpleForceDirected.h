//
// Created by werl on 01/11/16.
//

#ifndef NETVIZGL_SIMPLEFORCEDIRECTED_H
#define NETVIZGL_SIMPLEFORCEDIRECTED_H

#include "../Vertex.h"
#include "../Graphs/Graph.h"
#include "Algorithm.h"

class SimpleForceDirected : public Algorithm {
 public:
  SimpleForceDirected(Graph *g);
  void apply();
};

#endif //NETVIZGL_SIMPLEFORCEDIRECTED_H