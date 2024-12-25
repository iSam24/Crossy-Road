#include "MainWindow.h"
#include <QGraphicsView>
#include <QCoreApplication>
#include <QPixmap>
#include <QDebug>

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
        QPixmap PlayerPixMap = playerImage.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        player = new Player(PlayerPixMap);
        scene->addItem(player);

        // Create the QGraphicsView
        QGraphicsView *view = new QGraphicsView(scene, this);
        view->setRenderHint(QPainter::Antialiasing);
        view->setRenderHint(QPainter::SmoothPixmapTransform);

        // Create the Game widget
        game = new Game(scene, player, this);
        setCentralWidget(view);  // Set the QGraphicsView as the central widget
    }
}

// Destructor
MainWindow::~MainWindow() {
    delete player;
    delete scene;
}

QGraphicsScene* MainWindow::getScene() const {
    return scene; // Return the scene
}

Player* MainWindow::getPlayer() const {
    return player; // Return the player
}

Game* MainWindow::getGame() const {
    return game;
}