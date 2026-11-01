
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

class GYRAMenu : public Popup<> {
protected:
    bool setup() override {
        setTitle("GYRA Optimizer");

        auto label = CCLabelBMFont::create(
            "SUPER ULTRA LOW DETAIL",
            "bigFont.fnt"
        );

        label->setScale(0.45f);
        label->setPosition({
            m_size.width / 2,
            m_size.height / 2
        });

        m_mainLayer->addChild(label);
        return true;
    }

public:
    static GYRAMenu* create() {
        auto ret = new GYRAMenu();

        if (ret->initAnchored(280.f, 160.f)) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};

class $modify(MyMenuLayer, MenuLayer) {
    void onGYRA(CCObject*) {
        GYRAMenu::create()->show();
    }

    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        auto label = CCLabelBMFont::create(
            "GYRA",
            "goldFont.fnt"
        );

        auto button = CCMenuItemSpriteExtra::create(
            label,
            this,
            menu_selector(MyMenuLayer::onGYRA)
        );

        auto menu = CCMenu::create();
        menu->setPosition({0, 0});

        button->setPosition({
            winSize.width - 45.f,
            45.f
        });

        menu->addChild(button);
        this->addChild(menu);

        return true;
    }
};
