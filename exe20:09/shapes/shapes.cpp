#include "shapes.hpp"

/*class Polygon
{
private:
    vector < Point2d* > m_VertexList;
public:
    Polygon(vector < Point2d > vertex);
    Polygon(Point2d* vertex);

    float calcPerimeter();
    void updatePoints(vector < Point2d > vertex);

    void addPoints(Point2d pt);
    void removePoint(size_t index);
    void clearPolygon();

    ~Polygon();
};

Polygon::Polygon (vector < Point2d > vertex)
{

}

Polygon::~Polygon()
{
    cout << "Polygon destructor has been called." << endl;
}*/

Point2d ::Point2d(){
    m_x = new int;
    m_y = new int;
    *m_x = 0;
    *m_y = 0;
}

Point2d :: ~Point2d(){
    delete m_x;
    delete m_y;
}
