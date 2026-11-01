
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

#include "../core/Optimizer.hpp"

using namespace geode::prelude;

namespace gyra {

class SettingsPopup : public Popup<> {
protected:
    bool setup() override {
        this->setTitle("GYRA Settings");

        auto winSize = CCDirector::sharedDirector()
            ->getWinSize();

        auto title = CCLabelBMFont::create(
            "OPTIMIZER SETTINGS",
            "bigFont.fnt"
        );

        title->setPosition({
            winSize.width / 2,
            winSize.height / 2 + 35
        });

        title->setScale(0.5f);
        m_mainLayer->addChild(title);

        auto info = CCLabelBMFont::create(
            "Settings UI - Work in Progress",
            "goldFont.fnt"
        );

        info->setPosition({
            winSize.width / 2,
            winSize.height / 2
        });

        info->setScale(0.38f);
        m_mainLayer->addChild(info);

        return true;
    }

public:
    static SettingsPopup* create() {
        auto ret = new SettingsPopup();

        if (ret->initAnchored(300.f, 200.f)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};

} // namespace gyra
