#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // set graphic
    setPixmap(QPixmap(":/images/player.png"));
}



void Player::keyPressEvent(QKeyEvent *event){
    posx = pos().x();   //variavel de posicao do player
    posy = pos().y();   //variavel de posicao do player

    //qDebug() << posx << posy;
    if (event->key() == Qt::Key_A){
        if(pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_D){
        if(pos().x() < 1200)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_W){
        if(pos().y() > 0)
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_S){
        if(pos().y() < 800)
        setPos(x(),y()+10);
    }
    else if (event->key() == Qt::Key_R){
        magazine = 50;
        qDebug() << "Weapon Reloaded";
    }
    else if (event->key() == Qt::Key_Space){
        //player disparar
        if(magazine > 0){
            Bullet * bullet = new Bullet();
            bullet->setPos(x(),y());
            scene()->addItem(bullet);
            magazine -= 1;
        }
        else{
            qDebug() << "No Ammo, need to reload!";
        }
    }
}
void Player::spawn(){
    //criando inimigo
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
