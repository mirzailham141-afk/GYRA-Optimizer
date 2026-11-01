
#pragma once

namespace gyra {

struct OptimizerConfig {
    bool ultraLowDetail = false;
    bool reduceParticles = false;
    bool reduceEffects = false;
    bool showPerformance = true;
};

class Optimizer {
public:
    static Optimizer& get() {
        static Optimizer instance;
        return instance;
    }

    OptimizerConfig& config() {
        return m_config;
    }

private:
    OptimizerConfig m_config;
};

} // namespace gyra
