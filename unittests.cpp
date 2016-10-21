
//#ifdef CATCH_CONFIG_MAIN

//#include "unittests.h"
//#include "catch.hpp"
//#include "vec3.h"
//#include "InitialConditions/planetary.h"
//#include "Integrators/eulercromer.h"
////#include "solarsystem.h"
//#include "Integrators/velocityverlet.h"
//#include "math.h"
//#include <iostream>

//using namespace std;
//double norm(double*vec, int n);


//tests::tests()
//{}
//TEST_CASE("Preservation of angular momentum"){
//    SolarSystem solarSystem;
//    CelestialBody &test__object = solarSystem.createCelestialBody(vec3(1, 0, 0), vec3(0, 2*M_PI, 0), 1E-4);
//    CelestialBody &large_object = solarSystem.createCelestialBody(vec3(0, 0, 0), vec3(0, 0, 0), 1);
//    double dt = 0.1;
//    Euler integrator(dt);
//    int numTimesteps = 1000;
//    double** ang_mom = new double*[1000];
//    for (int i=0;i<1000;i++){
//        ang_mom[i] = new double[3];
//    }
//    for (int timestep = 0; timestep<numTimesteps; timestep++){
//        integrator.integrateOneStep(solarSystem);
//        vec3(a) = solarSystem.angularMomentum();
//        ang_mom[timestep][0] = a[0];
//        ang_mom[timestep][1] = a[1];
//        ang_mom[timestep][2] = a[2];

//    }
//    cout << ang_mom[0] << endl;
//    REQUIRE(norm(ang_mom[0], 3) == Approx(norm(ang_mom[100], 3)));


//}

//TEST_CASE("Preservation of potential energy"){
//    SolarSystem solarSystem;
//    CelestialBody &test__object = solarSystem.createCelestialBody(vec3(1, 0, 0), vec3(0, 2*M_PI, 0), 1E-4);
//    CelestialBody &large_object = solarSystem.createCelestialBody(vec3(0, 0, 0), vec3(0, 0, 0), 1);
//    double dt = 0.1;
//    Euler integrator(dt);
//    int numTimesteps = 1000;
//    double* pot_e = new double[1000];
//    for (int timestep = 0; timestep<numTimesteps; timestep++){
//        integrator.integrateOneStep(solarSystem);
//        pot_e[timestep] = solarSystem.potentialEnergy();
//    }
//    REQUIRE(pot_e[100] == Approx(pot_e[0]));

//}

//TEST_CASE("Preservation og kinetic energy"){
//    SolarSystem solarSystem;
//    CelestialBody &test__object = solarSystem.createCelestialBody(vec3(1, 0, 0), vec3(0, 2*M_PI, 0), 1E-4);
//    CelestialBody &large_object = solarSystem.createCelestialBody(vec3(0, 0, 0), vec3(0, 0, 0), 1);
//    double dt = 0.1;
//    Euler integrator(dt);
//    int numTimesteps = 1000;
//    double* kin_e = new double[1000];
//    for (int timestep = 0; timestep<numTimesteps; timestep++){
//         integrator.integrateOneStep(solarSystem);
//         kin_e[timestep] = solarSystem.kineticEnergy();

//    REQUIRE(kin_e[0] == Approx(kin_e[100]));
//}
//TEST_CASE("Preservation of total energy"){
//    SolarSystem solarSystem;
//    CelestialBody &test__object = solarSystem.createCelestialBody(vec3(1, 0, 0), vec3(0, 2*M_PI, 0), 1E-4);
//    CelestialBody &large_object = solarSystem.createCelestialBody(vec3(0, 0, 0), vec3(0, 0, 0), 1);
//    double dt = 0.1;
//    Euler integrator(dt);
//    int numTimesteps = 1000;
//    double* kin_e = new double[1000];
//    double* pot_e = new double[1000];
//    for (int timestep = 0; timestep<numTimesteps; timestep++){
//         integrator.integrateOneStep(solarSystem);
//         kin_e[timestep] = solarSystem.kineticEnergy();
//         pot_e[timestep] = solarSystem.kineticEnergy();

//    REQUIRE((kin_e[0] + pot_e[0]) == Approx(kin_e[100] + pot_e[100]));
//}
//}

//double norm(double* vec, int n){
//    double length = 0;
//    for (int i=0;i<n; i++){
//        length += vec[i]*vec[i];
//    }
//    return sqrt(length);
//}

//#endif
