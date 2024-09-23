#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int

#include <QDebug>
Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    //posicao aleatoria de spawn do inimigo
    int random_number = 1200;
    int random_number1 = rand()% 700;
    setPos(random_number,random_number1);

    setPixmap(QPixmap(":/images/zombie1.png"));
    setTransformOriginPoint(50,50);

    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(100);
}

int Enemy::move(){

    // movendo inimigo
    setPos(x()-10,y());
    if (pos().x() < 0){
        scene()->removeItem(this);
        return 0;
        //qDebug() << "zombie deleted";
    }
}
