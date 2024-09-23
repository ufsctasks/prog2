#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

Bullet::Bullet(){
    setRect(0,0,5,5); //Bullet size
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move(){
    // move bullet up
    setPos(x()+10,y()); //Bullet movement direction
    if (pos().x() + rect().width() > 750){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "Bullet has been deleted";
    }
}
