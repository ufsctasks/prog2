#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include "Enemy.h"

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics
    setPixmap(QPixmap(":/images/bullet1.png"));

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move(){

    QList<QGraphicsItem *> colliding_items = collidingItems();
    //checar colisao de balas com inimigos
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Enemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    // movimento do projetil
    setPos(x()+60,y());
    if(pos().x() > 1200){
        scene()->removeItem(this);
        delete this;
        //qDebug () << "bullet has been deleted";
    }

}

