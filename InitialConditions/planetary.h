#pragma once
#include "../InitialConditions/initialcondition.h"
#include "../particle.h"
#include <vector>
#include <string>


class Planetary : public InitialCondition {
public:
    Planetary() {}
    void setupParticles(class System& system);
    std::string getName();
};
