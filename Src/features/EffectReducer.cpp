
#include <Geode/Geode.hpp>
#include "../core/Optimizer.hpp"

using namespace geode::prelude;

namespace gyra {

bool isEffectReductionEnabled() {
    return Optimizer::get().config().reduceEffects;
}

} // namespace gyra
