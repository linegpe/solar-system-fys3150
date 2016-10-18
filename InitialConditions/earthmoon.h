#pragma once
#include "../InitialConditions/initialcondition.h"
#include <string>

class EarthMoon : public InitialCondition {
public:
    EarthMoon() {}
    void setupParticles(class System& system);
    std::string getName();
};
