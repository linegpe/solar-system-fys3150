TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
DEFINES += CATCH_CONFIG_MAIN
SOURCES += main.cpp \
    vec3.cpp \
    system.cpp \
    particle.cpp \
    Integrators/integrator.cpp \
    Integrators/eulercromer.cpp \
    Potentials/potential.cpp \
    Potentials/newtoniangravity.cpp \
    examples.cpp \
    Integrators/velocityverlet.cpp \
    Potentials/nopotential.cpp \
    InitialConditions/initialcondition.cpp \
    InitialConditions/twobody.cpp \
    InitialConditions/threebody.cpp \
    unittests.cpp \
    InitialConditions/planetary.cpp \
    InitialConditions/earthmoon.cpp \
    Potentials/relativisticgravity.cpp \
    InitialConditions/relativistic.cpp \
    angle.cpp

HEADERS += \
    vec3.h \
    system.h \
    particle.h \
    Integrators/integrator.h \
    Integrators/eulercromer.h \
    Potentials/potential.h \
    Potentials/newtoniangravity.h \
    examples.h \
    Integrators/velocityverlet.h \
    Potentials/nopotential.h \
    InitialConditions/initialcondition.h \
    InitialConditions/twobody.h \
    InitialConditions/threebody.h \
    unittests.h \
    InitialConditions/planetary.h \
    InitialConditions/earthmoon.h \
    Potentials/relativisticgravity.h \
    InitialConditions/relativistic.h \
    catch.hpp
