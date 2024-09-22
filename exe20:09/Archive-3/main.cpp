#include "point2d.hpp"
#include <vector>

int main()
{
    vector<Point2d*> listaPontos;

    listaPontos.push_back(new Point2d(20,20));
    listaPontos.push_back(new Point2d(30,30));
    listaPontos.push_back(new Point2d(40,40));
    listaPontos.push_back(new Point2d(50,50));
    listaPontos.push_back(new Point2d(60,60));

    for(size_t i=0; i<listaPontos.size(); i++)
        cout << "Ponto " << i << " x: " << listaPontos.at(i)->GetX() << " y: " << listaPontos.at(i)->GetY() << endl;

    for(size_t i=0; i<listaPontos.size(); i++)
       delete listaPontos.at(i);

    //valgrind --leak-check=full ./out
    //WSL windows subsystem
    //sudo apt-cache search valgrind
    //sudo apt-get install valgrind
    
    //macOS leaks
    //leaks --atExit -- ./out 

    return 0;
}
