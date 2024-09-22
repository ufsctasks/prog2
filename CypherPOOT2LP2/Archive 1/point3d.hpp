#include <iostream>

using namespace std;

class Point3d
{
private:
    float m_x, m_y, m_z;

public:
    //constructors and destructor
    Point3d() {
        m_x=m_y=m_z=0;
        cout << "Construtor chamado... " << endl;
    };
    Point3d(float x, float y, float z) {
        m_x=x; m_y=y; m_z=z;
        cout << "Construtor chamado... " << endl;
    };
    ~Point3d() {
        cout << "Destrutor chamado... " << endl;
    };
    void Mostrar(){
        cout << "x: " << m_x << " y: " << m_y << " z: " << m_z << endl;
    }
};
