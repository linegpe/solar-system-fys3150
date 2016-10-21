#include "velocityverlet.h"
#include "../system.h"

VelocityVerlet::VelocityVerlet(System* system)
    : Integrator(system) {
}

std::string VelocityVerlet::getName() {
    return "Velocity verlet";
}

void VelocityVerlet::integrateOneStep(std::vector<Particle*> particles) {

    m_system->computeForces();
    double dt2 = m_dt*m_dt;
    double dtOver2 = m_dt/2;
    for (int i=0; i<particles.size(); i++){
        Particle *p = particles.at(i);

        vec3 acceleration = p->getForce()/p->getMass();
        p->getPosition() += m_dt*p->getVelocity() + dt2*acceleration*0.5;
        m_system->computeForces();
        vec3 new_acceleration = p->getForce()/p->getMass();
        p->getVelocity() += dtOver2*(acceleration + new_acceleration);
    }
}


