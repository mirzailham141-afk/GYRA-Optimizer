
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

namespace gyra {

class GYRAMenu : public Popup<> {
protected:
    bool setup() override {
        this->setTitle("GYRA Optimizer");

        auto winSize = CCDirector::sharedDirector()
            ->getWinSize();

        auto label = CCLabelBMFont::create(
            "GYRA OPTIMIZER",
            "bigFont.fnt"
        );

        label->setPosition({
            winSize.width / 2,
            winSize.height / 2 + 35
        });

        label->setScale(0.65f);
        m_mainLayer->addChild(label);

        auto info = CCLabelBMFont::create(
            "Performance & Layout Tools",
            "goldFont.fnt"
        );

        info->setPosition({
            winSize.width / 2,
            winSize.height / 2
        });

        info->setScale(0.4f);
        m_mainLayer->addChild(info);

        return true;
    }

public:
    static GYRAMenu* create() {
        auto ret = new GYRAMenu();

        if (ret->initAnchored(300.f, 200.f)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};

} // namespace gyra
