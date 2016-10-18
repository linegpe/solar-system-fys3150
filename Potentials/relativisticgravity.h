#pragma once
#include "particle.h"
#include "potential.h"
#include <string>

class RelativisticGravity : public Potential {
private:
    double m_G;

public:
    RelativisticGravity(double G);
    void computeForces(Particle& a, Particle& b);
    std::string getName();
};
