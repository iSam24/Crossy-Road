#include "MainWindow.h"
#include "Player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    // Create the scene
    QGraphicsScene *scene = new QGraphicsScene(this);

    // Set window title and size
    setWindowTitle("Crossy Road");
    resize(800, 600);

    // Create the view
    QGraphicsView *view = new QGraphicsView(scene, this);
    setCentralWidget(view);

    // Add Player
    QPixmap playerImage("C:/Users/Sam.White/Programming/Golf Game/graphics/ghost.png");
    if (playerImage.isNull()) {
        qDebug() << "Could not load player image";
    } else {
        qDebug() << "Player image loaded";
        Player *player = new Player(playerImage);
        player->setPos(player->getPosition()[0], player->getPosition()[1]);
        scene->addItem(player);
    }
}

MainWindow::~MainWindow() {
    // Cleanup, if needed
}