#include <QApplication>
#include "Player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();

    //iniciando jogador
    Player * player1 = new Player();
    scene->addItem(player1);

    //setando foco no player para comandos
    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();

    //fixando cena
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(1200, 800);
    scene->setSceneRect(0,0,1200,800);

    //setando posição de spawn do player
    player1->setPos(view->width()/2,view->height()/2);

    //tempo de spawn dos inimigos
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player1,SLOT(spawn()));
    timer->start(1000);

    return a.exec();
}
