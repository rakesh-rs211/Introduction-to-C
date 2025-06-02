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

void printMesh(Mesh mesh){
        FILE *fptr;
        Point2D *pts;
        Element *elems;
        pts=mesh.pts; elems=mesh.eltopo;
        fptr = fopen("Beam.msh","w");
        /* Write header to the gmsh file */
        fprintf(fptr,"$MeshFormat\n2.2 0 8\n$EndMeshFormat\n");

        /* Write the Nodal Coordinates */
        fprintf(fptr,"$Nodes\n%d\n",mesh.NNodes);
        for(int i=0; i<mesh.NNodes; i++){
                fprintf(fptr,"%d %f %f 0.0\n",i+1,pts[i].x,pts[i].y);
        }
        fprintf(fptr,"$EndNodes\n");
        /* Write the Element Topology */
        fprintf(fptr,"Elements\n%d\n",mesh.NElems);
        for(int i=0; i<mesh.NElems; i++){
                fprintf(fptr,"%d 3 0 %d %d %d %d\n",i+1,elems[i].NodeID[0]+1,elems[i].NodeID[1]+1,\
                                                        elems[i].NodeID[2]+1,elems[i].NodeID[3]+1);
        }
        fprintf(fptr,"$EndElements\n");
        fclose(fptr);
        return;
}
#endif
