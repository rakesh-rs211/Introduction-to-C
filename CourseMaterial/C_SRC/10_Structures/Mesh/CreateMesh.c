#include <stdio.h>
#include <stdlib.h>
#include "Mesh.h"
void createMesh(Mesh* meshptr){
        int NNodes = 10;
        Point2D* pts;
        pts=malloc(NNodes*sizeof(Point2D));
        int NElem = 4;
        Element* eltopo;
        eltopo= malloc(NElem*sizeof(Element));

        /* Initialize the nodal cooridnates */
        for(int i = 0; i < NNodes;i++){
                if(NNodes>=5){
                        pts[i].x = (double)i;
                        pts[i].y = 0.0;
                }
                else{
                        pts[i].x = (double)i-5.0;
                        pts[i].y = 1.0;
                }
        }
        /* Initialize the element topology */
        for(int i =0; i<4; i++){
                eltopo[i].NodeID[0] = i;
                eltopo[i].NodeID[1] = i+1;
                eltopo[i].NodeID[2] = i+6;
                eltopo[i].NodeID[3] = i+5;
                eltopo[i].MaterialID = 1;
        }
        meshptr->eltopo = eltopo;
        meshptr->pts = pts;
        meshptr->NNodes = 10;
        meshptr->NElems = 4;
        return ;
}

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

int main(int argc, char argv[]){
        Mesh mesh;
        createMesh(&mesh);
        printMesh(mesh);
        return 0;
}
