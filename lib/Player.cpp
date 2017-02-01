#include "../include/Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";
    
    stressness = 0;
    smrtness = 0;
    annoyedness = 0;
    whatevenness = 0;
    funnyness = 0;
    madness = 0;
    friendness = 0;
    nessness = 100;
}

Player::~Player() {
    
}

void Player::setName(std::string n) {
    name = n;
}

std::string Player::getName() {
    return name;
}

void Player::setStressness(int i) {
    stressness += i;
}

void Player::setSmrtness(int i) {
    smrtness += i;
}

void Player::setAnnoyedness(int i) {
    annoyedness += i;
}

void Player::setWhatevenness(int i) {
    whatevenness += i;
}

void Player::setFunnyness(int i) {
    funnyness += i;
}

void Player::setMadness(int i) {
    madness += i;
}

void Player::setFriendness(int i) {
    friendness += i;
}

void Player::setNessness(int i) {
    nessness += i;
}

void Player::printStats() {
    cout << "=============================================================================" << endl;
    cout << "Stressness: " << stressness << endl;
    cout << "Smrtness: " << smrtness << endl;
    cout << "Annoyedness: " << annoyedness << endl;
    cout << "Whatevenness: " << whatevenness << endl;
    cout << "Funnyness: " << funnyness << endl;
    cout << "Madness: " << madness << endl;
    cout << "Friendness: " << friendness << endl;
    cout << "Nessness: " << nessness << endl;
    cout << "=============================================================================" << endl;
}