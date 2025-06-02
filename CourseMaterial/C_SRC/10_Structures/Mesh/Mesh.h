#ifndef MESH_COSS_H
#define MESH_COSS_H
typedef struct point2d{
        double x;
        double y;
} Point2D;

// typedef int Quad[4];

typedef struct element{
        int NodeID[4];
        int MaterialID;
} Element;

typedef struct mesh{
        int NNodes;
        Point2D *pts;
        int NElems;
        Element *eltopo;
} Mesh;

#endif
