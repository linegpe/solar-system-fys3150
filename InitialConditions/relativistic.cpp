#include "relativistic.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void Relativistic::setupParticles(System &system) {
    Particle* Sun =     new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);
    Particle* Mercury = new Particle(vec3(0.3075,0,0), vec3(0,12.44,0), 1.2e-7);
    system.addParticle(Sun);
    system.addParticle(Mercury);
}

std::string Relativistic::getName() {
    return "Relativistic";
}
