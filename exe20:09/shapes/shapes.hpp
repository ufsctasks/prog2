#include <iostream>
#include <vector>

using namespace std;

class Point2d
{
private:
    int *m_x, *m_y;
public:
    Point2d(int x, int y);
    Point2d();
    ~Point2d();
};