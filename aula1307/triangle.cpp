#include "triangle.hpp"


void Triangle :: SetLados(float l1, float l2, float l3)
{
    m_lado1 = l1;
    m_lado2 = l2;
    m_lado3 = l3;

    m_area = CalcArea();
    m_perimetro = CalcaPerimetro();
}

float Triangle :: CalcArea()
{
    float s = (m_lado1 + m_lado2 + m_lado3)/2
    float a = 
}