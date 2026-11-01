
#include <Geode/Geode.hpp>
#include "../core/Optimizer.hpp"

using namespace geode::prelude;

namespace gyra {

bool isLowDetailEnabled() {
    return Optimizer::get().config().ultraLowDetail;
}

} // namespace gyra
