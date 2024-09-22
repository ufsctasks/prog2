#include "point2d.hpp"

class Triangle
{
    private:
        float m_area, m_perimetro;
        float m_lado1, m_lado2, m_lado3;
        Point2d m_verticie, m_verticie1, m_verticie2;
    public:
        void SetLados(float l1, float l2, float l3);
        //void SetVerticies(Point2d p1, Point2d p2, Point2d p3);

        float getArea(){
            return m_area;
        }
        float getPerimeter(){
            return m_perimetro;
        }
}