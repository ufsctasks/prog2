#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"

#include <QDebug>
void MyRect::keyPressEvent(QKeyEvent *event){
        //qDebug() << pos().x() << pos().y();
        //player actions map
    if      (event->key() == Qt::Key_A){
        if(pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_D){
        if(pos().x() < 750)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_W){
        if(pos().y() > 0)
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_S){
        if(pos().y() < 750)
        setPos(x(),y()+10);
    }
    else if (event->key() == Qt::Key_R){
        magazine = 100;
        qDebug() << "Reloaded";
    }
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        if(magazine > 0){
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
        magazine -= 1;
        }
        else{
            qDebug() << "No Ammo, need to reload";
        }
    }
}
