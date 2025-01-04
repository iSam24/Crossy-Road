// Crossy Road Game in C++ using the Qt Framework for rendering
#include <QApplication>
#include <QTimer>
#include "MainWindow.h"
#include "Game.h"
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv); // Create the application

    MainWindow window; // Create the main window
    window.show(); // Show the main window

    // Retrieve scene and player from MainWindow
    QGraphicsScene *scene = window.getScene(); 
    Player *player = window.getPlayer();

    Game *game = window.getGame();
    
    // Game loop
    QTimer *timer = new QTimer();
    QObject::connect(timer, &QTimer::timeout, [&window, &game](){
        game->update();
        game->checkCollision();
        window.update();
    });
    timer->start(16);   // 60 FPS (1000ms / 60 = 16.6666ms)

    return app.exec(); // Start the application event loop 
}
