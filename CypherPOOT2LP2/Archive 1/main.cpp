#include "point3d.hpp"

int main()
{
    Point3d pt1;  //estatico
    Point3d pt2(5,10,3); //estatico
    Point3d *pt3 = new Point3d(); //dinamico
    Point3d *pt4 = new Point3d(-1,0,1); //dinamico

    pt1.Mostrar();
    pt2.Mostrar();
    pt3->Mostrar();
    pt4->Mostrar();

    //para checar memoria: valgrind
    //valgrind --leak-check=full ./out
    //subsystem do windows WSL

    delete pt3;
    delete pt4;

    return 0;
}
