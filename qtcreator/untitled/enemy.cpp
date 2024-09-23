#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <stdlib.h>

Enemy::Enemy(){

    int random_number = rand() & 650;
    setPos(random_number, 0);

    setRect(0,0,50,50); //Bullet size
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move(){
    // move enemy
    setPos(x()+10,y()); //Bullet movement direction
    if (pos().x() + rect().width() > 750){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "Bullet has been deleted";
    }
}

//      MyRect * player = new MyRect();
//      player->setRect(0,0,50,50);
