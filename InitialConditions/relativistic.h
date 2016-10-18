#pragma once
#include "../InitialConditions/initialcondition.h"
#include "../particle.h"
#include <vector>
#include <string>


class Relativistic : public InitialCondition {
public:
    Relativistic() {}
    void setupParticles(class System& system);
    std::string getName();
};
