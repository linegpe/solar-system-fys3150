#include "twobody.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void TwoBody::setupParticles(System &system) {

    // For running the sun-earth model

    Particle* Earth = new Particle(vec3(1,0,0), vec3(0,2*sqrt(2)*M_PI,0), 3e-6);  // Velocity: vec3(0,2*M_PI,0)
    Particle* Sun = new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);

    system.addParticle(Earth);
    system.addParticle(Sun);

    // For running the sun-mercury non-relativistic simulation

//    Particle* Sun =     new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);
//    Particle* Mercury = new Particle(vec3(0.3075,0,0), vec3(0,12.44,0), 1.2e-7);
//    system.addParticle(Sun);
//    system.addParticle(Mercury);

}

std::string TwoBody::getName() {
    return "Two-body";
}
