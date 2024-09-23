#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    int posx;   //posicao player
    int posy;   //posicao player
    int magazine = 50;  //pente de municao
public slots:
    void spawn();   //funcao spawn
};

#endif // MYRECT_H
