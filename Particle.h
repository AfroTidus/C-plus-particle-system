#pragma once
#include <SFML/Graphics.hpp>
class ParticleSystem;

class Particle
{
    sf::Vector2f position;
    sf::Vector2f velocity;
    ParticleSystem& parent;
    int dummyMemory[1000];
public:
    Particle(const sf::Vector2f& position, const sf::Vector2f& velocity, ParticleSystem& parent) :
        position(position), velocity(velocity), parent(parent) {}
    void Update(float deltaTime);
    sf::Vector2f GetPosition() { return position; }
    sf::Vector2f GetVelocity() { return velocity; }
};