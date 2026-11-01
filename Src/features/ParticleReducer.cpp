
#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

#include "../core/Optimizer.hpp"

using namespace geode::prelude;

namespace gyra {

bool isParticleReductionEnabled() {
    return Optimizer::get().config().reduceParticles;
}

}
