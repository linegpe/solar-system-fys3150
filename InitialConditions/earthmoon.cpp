#include "earthmoon.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void EarthMoon::setupParticles(System &system) {
    Particle* Sun =     new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);
    Particle* Earth =   new Particle(vec3(9.779167444303752E-01, 2.272281606873612E-01, -1.762900112459768E-04), vec3(-4.140900006551348E-03, 1.671297229409165E-02, -6.071663121998971E-07)*365, 3e-6);
    Particle* Luna = new Particle(vec3(9.768830994836281E-01, 2.247385341736485E-01, 6.846869954431025E-05), vec3(-3.620432466255178E-03, 1.650856576752649E-02, 2.498599237760420E-06)*365, 5e-11);

    system.addParticle(Sun);
    system.addParticle(Earth);
    system.addParticle(Luna);
}

std::string EarthMoon::getName() {
    return "Earth-Moon";
}

