#include "shapes.hpp"

float shapes :: calcperimeter(){

    cout << "sou um generico" << endl;
    return m_perimeter;

}

float square :: calcperimeter(){
    
    cout << "sou um square" << endl;

    m_perimeter = m_edge *4;
    return m_perimeter;
}

float triangle :: calcperimeter(){

    cout << "sou um triangle" << endl;

    m_perimeter = m_edge0 + m_edge1 + m_edge2;
    return m_perimeter;
}

float circle :: calcperimeter(){

    cout << "sou um circle" << endl;

    m_perimeter = 2*3.14*m_ratio;
    return m_perimeter;
}