#include<iostream>
#include<vector>

using namespace std;

class Shape2d {

    private:

    int X;
    int Y;

    public:
    
    Shape2d();
    ~Shape2d();
    void set_x(int x){
        this->X = x;
    };
    void set_y(int y){
        this->Y = y;
    };

};

class Circle : private Shape2d {
    private:
    size_t r;

    public:
    Circle();
    ~Circle();
    Circle(size_t ratio){
        cout << "Initializing a new circle." << endl;
        this->r = ratio;
    };
};

class Square : private Shape2d {
    private:
    size_t l;

    public:
    Square(){};
    ~Square(){};
    Square(size_t edge){
        this->l = edge;
    };
    size_t getEdge(){
        return this->l;
    }
    size_t getPerimeter(){
        return 4*this->getEdge();
    };
};

class Triangle : private Shape2d {
    public:
    Triangle(){};
    ~Triangle(){};
    Triangle(Shape2d p1, Shape2d p2, Shape2d p3){
        cout << "Initializing a new triangle." << endl;
        p1->X.set_x();
        p1->Y.set_y();
        p2->X.set_x();
        p2->Y.set_y();
        p3->X.set_x();
        p3->Y.set_y();
    };
    vector<size_t> getSides(){
        vector<size_t> sides = [p1->X - p2->X, p1->Y - p2->Y, p2->X - p3->X, p2->Y - p3->Y, p3->X - p1->X, p3->Y - p1->Y];
        return sides;
    };
    size_t getPerimeter(){
        vector<size_t> sides = this->getSides();
        return sides[0] + sides[1] + sides[2];
    };
};

class Polygon : private Shape2d {
    public:
    Polygon();
    ~Polygon();
    Polygon(vector<Shape2d> vertices){
        for (size_t i = 0; i < vertices.size(); i++){
            vertices[i]->X.set_x();
            vertices[i]->Y.set_y();
        };
    };
    size_t getPerimeter(){
        vector<size_t> sides = this->getSides();
        size_t perimeter = 0;
        for (size_t i = 0; i < sides.size(); i++){
            perimeter += sides[i];
        };
        return perimeter;
    };
};

