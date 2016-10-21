#include "examples.h"
#include "system.h"
#include "particle.h"
#include "Integrators/eulercromer.h"
#include "Integrators/velocityverlet.h"
#include "Potentials/newtoniangravity.h"
#include "Potentials/nopotential.h"
#include "Potentials/relativisticgravity.h"
#include "InitialConditions/twobody.h"
#include "InitialConditions/threebody.h"
#include "InitialConditions/planetary.h"
#include "InitialConditions/earthmoon.h"
#include "InitialConditions/relativistic.h"
#include <iostream>
#include <cmath>


void Examples::twoBodyProblem() {
    double G = 4*M_PI*M_PI; //6.67e-11;

    System* twoBodySystem = new System();
    twoBodySystem->setFileName          ("twobody.dat");
    //twoBodySystem->setIntegrator        (new EulerCromer(twoBodySystem));
    VelocityVerlet *integrator = new VelocityVerlet(twoBodySystem);
    integrator->setDt(1e-3);
    twoBodySystem->setIntegrator        (integrator);
    twoBodySystem->setPotential         (new NewtonianGravity(G));
    twoBodySystem->setInitialCondition  (new TwoBody());
    twoBodySystem->setFileWriting       (true);
    twoBodySystem->removeLinearMomentum ();
    twoBodySystem->integrate            (20000);
}

void Examples::threeBodyProblem() {

    double G = 4*M_PI*M_PI; //6.67e-11;

    System* threeBodySystem = new System();
    threeBodySystem->setFileName          ("threebody.dat");
    //threeBodySystem->setIntegrator        (new EulerCromer(threeBodySystem)); // OBS! USE VERLET LATER
    threeBodySystem->setIntegrator        (new VelocityVerlet(threeBodySystem));
    //VelocityVerlet *integrator = new VelocityVerlet(threeBodySystem);
    //integrator->setDt(1e-2);
    threeBodySystem->setPotential         (new NewtonianGravity(G));
    threeBodySystem->setInitialCondition  (new ThreeBody());
    threeBodySystem->setFileWriting       (true);
    threeBodySystem->removeLinearMomentum ();
    threeBodySystem->integrate            (5000);

}

void Examples::EarthMoonProblem() {
    double G = 4*M_PI*M_PI;

    System* EarthMoonSystem = new System();
    EarthMoonSystem->setFileName          ("eartmoon.dat");
    EarthMoonSystem->setIntegrator        (new VelocityVerlet(EarthMoonSystem));
    EarthMoonSystem->setPotential         (new NewtonianGravity(G));
    EarthMoonSystem->setInitialCondition  (new EarthMoon());
    EarthMoonSystem->setFileWriting       (true);
    EarthMoonSystem->removeLinearMomentum ();
    EarthMoonSystem->integrate            (200000);
}

void Examples::planetaryProblem() {
    double G = 4*M_PI*M_PI; //6.67e-11;

    System* planetarySystem = new System();
    planetarySystem->setFileName          ("planetary.dat");
    //planetarySystem->setIntegrator        (new EulerCromer(planetarySystem)); // OBS! USE VERLET LATER
    VelocityVerlet *integrator = new VelocityVerlet(planetarySystem);
    integrator->setDt(1e-4);
    planetarySystem->setIntegrator        (integrator);
    planetarySystem->setPotential         (new NewtonianGravity(G));
    planetarySystem->setInitialCondition  (new Planetary());
    planetarySystem->setFileWriting       (true);
    planetarySystem->removeLinearMomentum ();
    planetarySystem->integrate            (1900000);
}

void Examples::relativisticProblem() {
    double G = 4*M_PI*M_PI;

    System* relativisticSystem = new System();
    relativisticSystem->setFileName         ("relativistic_update.dat");
    VelocityVerlet *integrator = new VelocityVerlet(relativisticSystem);
    integrator->setDt(1e-6);
    relativisticSystem->setIntegrator       (integrator);
    relativisticSystem->setPotential        (new RelativisticGravity(G));
    relativisticSystem->setInitialCondition (new Relativistic());
    relativisticSystem->setFileWriting      (true);
    relativisticSystem->removeLinearMomentum();
    //relativisticSystem->integrate           (10000000);
    relativisticSystem->perihelion          (100000000);
}
