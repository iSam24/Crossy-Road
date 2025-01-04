#include "MainWindow.h"
#include <QGraphicsView>
#include <QCoreApplication>
#include <QPixmap>
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), scene(nullptr), player(nullptr) {
    // Set window title
    setWindowTitle("Crossy Road");
    
    // Create scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 800, 600);

    // Load the player image
    QString playerPath = QCoreApplication::applicationDirPath() + "/../graphics/ghost.png";
    QPixmap playerImage(playerPath);

    if (playerImage.isNull()) {
        qDebug() << "Could not load player image";
    } else {
        qDebug() << "Player image loaded";
        QPixmap PlayerPixMap = playerImage.scaled(PlayerSize, PlayerSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        player = new Player(PlayerPixMap);
        scene->addItem(player);

        // Create the QGraphicsView
        QGraphicsView *view = new QGraphicsView(scene, this);
        view->setRenderHint(QPainter::Antialiasing);
        view->setRenderHint(QPainter::SmoothPixmapTransform);
        setCentralWidget(view); 
        view->setFocusPolicy(Qt::StrongFocus);
        view->setFocus();

        // Create the Game widget
        game = new Game(scene, player, this);
    }
}

// Destructor
MainWindow::~MainWindow() {
    delete player;
    delete game;
    delete scene;
}

QGraphicsScene* MainWindow::getScene() const {
    return scene; 
}

Player* MainWindow::getPlayer() const {
    return player;
}

Game* MainWindow::getGame() const {
    return game;
}

int MainWindow::getPlayerSize() const {
    return PlayerSize;
}
