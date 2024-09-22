#include "shapes.hpp"
#include<vector>

int main(){
    
vector < shapes* > listaShapes;

    //listaShapes.push_back(new shapes); nao s epode instanciar uma classe abstrata
    listaShapes.push_back(new square(4));
    listaShapes.push_back(new triangle(10, 10, 14.42));
    listaShapes.push_back(new circle(10));

    shapes* p = listaShapes.at(1);

    cout << p->calcperimeter() << endl;

    //shapes sh1;
    //circle sh2(10);
    //triangle sh3(10, 10, 14.142);
    //square sh4(4);

    //cout << sh1.calcperimeter() << endl;
    //cout << sh2.calcperimeter() << endl;
    //cout << sh3.calcperimeter() << endl;
    //cout << sh4.calcperimeter() << endl;

    for (size_t i; i< listaShapes.size(); i++){


    }


    
    return 0;
}