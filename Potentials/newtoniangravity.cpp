#include <cmath>
#include "newtoniangravity.h"
#include <iostream>

NewtonianGravity::NewtonianGravity(double G) : m_G(G) {

}

void NewtonianGravity::computeForces(Particle& a, Particle& b) {
    /*
     * This is where the ordinary Newtoninan gravity forces and potential
     * energies should be calculated. This method is called by the System
     * class in System::computeForces, for all particle pairs a and b.
     *
     * Note that you may access the mass and the position of the particles a
     * and b by
     *
     *      a.getMass();       b.getMass();
     *      a.getPosition();   b.getPosition();
     *
     * In order to apply the forces to each particle, it is easiest to use the
     * Particle::addForce method.
     *
     * Since calculating the forces between a and b almost inevitably involves
     * calculating the potential energy, V(r), it is assumed by the Potential
     * class that this quantity is calculated here and added to the
     * m_potentialEnergy variable. Note: You may skip this until you have a
     * working two-body problem, since the calculation of the potential energy
     * is only neccessary for verification purposes later.
     */

    double G = m_G;

    double mass_a = a.getMass();
    double mass_b = b.getMass();

    vec3 poss_a = a.getPosition();
    vec3 poss_b = b.getPosition();

    double r_x = poss_a(0) - poss_b(0);
    double r_y = poss_a(1) - poss_b(1);
    double r_z = poss_a(2) - poss_b(2);

    double r = sqrt(r_x*r_x + r_y*r_y + r_z*r_z);

    double F_ax =  -G*mass_a*mass_b*r_x/(r*r*r);
    double F_ay =  -G*mass_a*mass_b*r_y/(r*r*r);
    double F_az =  -G*mass_a*mass_b*r_z/(r*r*r);



    double F_bx = - F_ax;
    double F_by = - F_ay;
    double F_bz = - F_az;

    a.addForce(F_ax,F_ay,F_az);
    b.addForce(F_bx,F_by,F_bz);

    //double V = 1.0;

    m_potentialEnergy += mass_a*mass_b*G/(r*r);
    //m_potentialEnergy += V;

}

std::string NewtonianGravity::getName() {
    return "Newtonian gravity";
}
