//#ifndef CATCH_CONFIG_MAIN

#include <iostream>
#include <cmath>
#include "examples.h"

int main(int, char**) {

    // Timing the algorithm
    clock_t start, finish;
    start = clock();

    //Examples::twoBodyProblem();
    //Examples::threeBodyProblem();
    //Examples::planetaryProblem();
    //Examples::EarthMoonProblem();
    Examples::relativisticProblem();

    // Timing finished
    finish = clock();
    double time = ( double (finish - start)/CLOCKS_PER_SEC);

    std::cout << "Run time: " << time << std::endl;

    return 0;
}

//#endif
