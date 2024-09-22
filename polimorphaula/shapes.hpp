#ifndef SHAPES_HPP
#define SHAPES_HPP
#include<iostream>

using namespace std;

class shapes
{
    protected:
        float m_perimeter;
    
    public:
        float m_edge;
        shapes() : m_perimeter (0) {};
        virtual float calcperimeter() = 0; // classe abstrata [funcao virtaul pura]
};

class square : public shapes
{
    protected:
        float m_edge;

    public:
    square(float e) : m_edge(e) {};
        float calcperimeter();


};

class triangle : public shapes
{
    protected:
        float m_edge0, m_edge1, m_edge2;

    public:
        triangle(float e, float e1, float e2) : m_edge0(e), m_edge1(e1), m_edge2(e2) {};
        float calcperimeter();


};

class circle : public shapes
{
    protected:
        float m_ratio;

    public:
        circle(float ratio) : m_ratio(ratio) {};
        float calcperimeter();


};

#endif
