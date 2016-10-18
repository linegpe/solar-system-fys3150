#include "planetary.h"
#include "../vec3.h"
#include "../system.h"
#include <cmath>


void Planetary::setupParticles(System &system) {
    Particle* Sun =     new Particle(vec3(0,0,0), vec3(0,0,0), 1.0);
    Particle* Mercury = new Particle(vec3(-1.689638050644479E-01, 2.746185253985868E-01, 3.783565039667143E-02), vec3(-2.941090431599825E-02, -1.400673667979914E-02, 1.552995718374029E-03)*365, 1.2e-6);
    Particle* Venus =   new Particle(vec3(2.261833743605355E-02, -7.233613245242075E-01, -1.122302675795243E-02), vec3(2.008241010304477E-02,  4.625021426170730E-04, -1.152705875157388E-03)*365, 2.45e-6);
    Particle* Earth =   new Particle(vec3(9.779167444303752E-01, 2.272281606873612E-01, -1.762900112459768E-04), vec3(-4.140900006551348E-03, 1.671297229409165E-02, -6.071663121998971E-07)*365, 3e-6);
    Particle* Mars =    new Particle(vec3(1.083484179334264E+00, -8.630838246913118E-01, -4.481984242527660E-02), vec3(9.286451652444910E-03, 1.212119447482730E-02, 2.594581334177116E-05)*365, 3.3e-7);
    Particle* Jupiter = new Particle(vec3(-5.433021216987578E+00, -3.890762583943597E-01, 1.231202671627251E-01), vec3(4.512629769156300E-04, -7.169976033688688E-03, 1.969934735867556E-05)*365, 0.00095);
    Particle* Saturn =  new Particle(vec3(-2.313180120049030E+00, -9.763200920369798E+00, 2.618183143745622E-01), vec3(5.123311296208641E-03, -1.303286396807794E-03, -1.814530920780186E-04)*365, 0.000275);
    Particle* Uranus =  new Particle(vec3(1.847687170457543E+01, 7.530306462979262E+00, -2.114037101346196E-01), vec3(-1.513092405140061E-03, 3.458857885545459E-03, 3.234920926043226E-05)*365, 4.4e-5);
    Particle* Neptune = new Particle(vec3(2.825174937236003E+01, -9.949114169366872E+00, -4.462071175746522E-01), vec3(1.021996736183022E-03, 2.979258351346539E-03, -8.531373744879276E-05)*365, 5.15e-5);

    Particle* Luna = new Particle(vec3(9.768830994836281E-01, 2.247385341736485E-01, 6.846869954431025E-05), vec3(-3.620432466255178E-03, 1.650856576752649E-02, 2.498599237760420E-06)*365, 5e-11);

    system.addParticle(Sun);
    system.addParticle(Mercury);
    system.addParticle(Venus);
    system.addParticle(Earth);
    system.addParticle(Mars);
    system.addParticle(Jupiter);
    system.addParticle(Saturn);
    system.addParticle(Uranus);
    system.addParticle(Neptune);

    system.addParticle(Luna);
}

std::string Planetary::getName() {
    return "Planetary";
}
