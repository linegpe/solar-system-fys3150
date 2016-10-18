#include <iostream>
#include <cmath>
#include "eulercromer.h"
#include "../system.h"

EulerCromer::EulerCromer(System* system)
    : Integrator(system) {
}

void EulerCromer::integrateOneStep(std::vector<Particle*> particles) {
    m_system->computeForces();
    for (int i=0; i<particles.size(); i++) {
        Particle *p = particles.at(i);
        vec3 F = p->getForce();



        /*
         * This is where you need to update the positions and the velocities
         * and the velocities of each particle according to the Euler-Cromer
         * scheme.
         *
         * You can access the position of particle number i by
         *
         *      p->getPosition()
         *
         * Remember that the positions and velocities of all the particles are
         * vec3 vectors  , which you can use the +=, -=, etc. operators on.
         */


        // Forward-Euler:

        p->getVelocity() += (F/p->getMass())*m_dt; //(vec3(m_dt*F(0)/p->getMass(),m_dt*F(1)/p->getMass(),0));
        p->getPosition() += m_dt*p->getVelocity();

    }
}

std::string EulerCromer::getName() {
    return "Euler-Cromer";
}
