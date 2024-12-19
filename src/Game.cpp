#include "Game.h"
#include "Vehicle.h"
#include "Player.h"
#include <iostream>

// Constructor
Game::Game() : player(), isRunning(true), score(0) {
    initialiseVehicles();
}

// Initialise vehicles with starting position and speed
void Game::initialiseVehicles() {
    vehicles.push_back(Vehicle({0.0f,10.0f},2,Direction::LEFT)); // Examples
    vehicles.push_back(Vehicle({0.0f,15.0f},2,Direction::LEFT));
}

// Start the game
void Game::start() {

}

// Handle user input
void Game::userInput() {

}

// Update the game 
void Game::update() {
    // move vehicles

    // update score
}

// Check for player collisions
void Game::checkCollision() {

}

// Render game
void Game::render() {

}

