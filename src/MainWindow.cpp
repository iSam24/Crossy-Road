#include "MainWindow.h"
#include "Player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QCoreApplication>
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
    QString playerPath = QCoreApplication::applicationDirPath() + "/../graphics/ghost.png";
    QPixmap playerImage(playerPath);
    if (playerImage.isNull()) {
        qDebug() << "Could not load player image";
    } else {
        qDebug() << "Player image loaded";
        QPixmap scaledPlayerImage = playerImage.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        Player *player = new Player(scaledPlayerImage);
        player->setPos(player->getPosition()[0], player->getPosition()[1]);
        scene->addItem(player);
    }
}

MainWindow::~MainWindow() {
    // Cleanup, if needed
}