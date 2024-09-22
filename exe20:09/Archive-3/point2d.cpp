#include "point2d.hpp"

Point2d::Point2d()
{
    m_x = new int;
    m_y = new int;
    *m_x = 0;
    *m_y = 0;

    //m_x = new int(0);
    //m_y = new int(0);
}

Point2d::Point2d(int x, int y)
{
    m_x = new int;
    m_y = new int;
    *m_x = x;
    *m_y = y;
}


Point2d::~Point2d()
{
    delete m_x;
    delete m_y;
}
