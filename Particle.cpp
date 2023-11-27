#include "Particle.h"
#include "ParticleSystem.h"

void Particle::Update(float deltaTime)
{
	position += velocity * deltaTime;
	velocity += parent.GetGravity() * deltaTime;
}