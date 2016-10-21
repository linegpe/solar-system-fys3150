
#include <cmath>
#include "relativisticgravity.h"
#include <iostream>

RelativisticGravity::RelativisticGravity(double G) : m_G(G) {

}

void RelativisticGravity::computeForces(Particle& a, Particle& b) {


    double G = m_G;
    double c = 63198;

    double mass_a = a.getMass();
    double mass_b = b.getMass();

    vec3 poss_a = a.getPosition();
    vec3 poss_b = b.getPosition();

    double r_x = poss_a(0) - poss_b(0);
    double r_y = poss_a(1) - poss_b(1);
    double r_z = poss_a(2) - poss_b(2);

    vec3 velocity = b.getVelocity();

    double r = sqrt(r_x*r_x + r_y*r_y + r_z*r_z);

    vec3 l = (poss_b-poss_a).cross(velocity);
//    l = vec3::cross(poss_b);
    double l2 = l.lengthSquared();

    double F_ax =  (-G*mass_a*mass_b*r_x/(r*r*r))*(1+3*l2/(r*r*c*c));
    double F_ay =  (-G*mass_a*mass_b*r_y/(r*r*r))*(1+3*l2/(r*r*c*c));
    double F_az =  (-G*mass_a*mass_b*r_z/(r*r*r))*(1+3*l2/(r*r*c*c));

//    double aa = -G*mass_a*mass_b*r_x/(r*r*r);
//    double ba = -G*mass_a*mass_b*r_x/(r*r*r)*3*l2/(r*r*c*c);
//    double ratio = ba/aa;
//    std::cout << "Ratio: " << ba << std::endl;

    double F_bx = - F_ax;
    double F_by = - F_ay;
    double F_bz = - F_az;

    a.addForce(F_ax,F_ay,F_az);
    b.addForce(F_bx,F_by,F_bz);

    //double V = 1.0;

    m_potentialEnergy += mass_a*mass_b*G/r;
    //m_potentialEnergy += V;

}

std::string RelativisticGravity::getName() {
    return "Relativistic gravity";
}
