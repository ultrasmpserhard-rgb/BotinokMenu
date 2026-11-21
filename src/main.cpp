#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(P1ratMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto button = CCMenuItemSpriteExtra::create(
            ButtonSprite::create(
                "P1ratClient",
                90,
                true,
                "bigFont.fnt",
                "GJ_button_04.png",
                30.0f,
                0.8f
            ),
            this,
            menu_selector(P1ratMenuLayer::openMenu)
        );

        button->setPosition({45, 35});
        this->addChild(button);

        return true;
    }

    void openMenu(CCObject*) {
        FLAlertLayer::create(
            "P1ratClient",
            "Welcome to P1ratClient!",
            "CLOSE"
        )->show();
    }
};

