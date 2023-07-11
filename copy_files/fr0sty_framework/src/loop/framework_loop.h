//
// Created by fr0sty on 20/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_LOOP_H
#define FR0STY_ENGINE_FRAMEWORK_LOOP_H

#include <iostream>
#include <cmath>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "assets/framework_assets.h"

#include "components/framework_components.h"

#include "inputs/framework_inputs.h"

#include "logging/framework_log.h"

#include "framework_application.h"
#include "framework_display.h"
#include "framework_window_styles.h"

#include "objects/game_object.h"

#include "physics/framework_box_collision.h"
#include "physics/framework_rigidbody.h"

#include "utility/framework_clock.h"

namespace fr0sty {

    enum ENGINE_STATE {
        SPLASH,
        RUN
    };

    class fEngine {
    private:
        fEngine() = default;

        static fEngine *s_instance;

        int m_width, m_height;
        const char *m_title;
        uint32_t m_style;

        ENGINE_STATE engineState;

        fClock* m_clock;
        fClock* splashClock;
        float m_deltaTime;

        sf::RenderWindow *m_window;

        sf::Event event;

        sf::Texture splashTexture;
        sf::Sprite splashSprite;

        fApplication *m_application;
        fDisplay *m_display;


        bool init();
        bool initVariables();
        bool initWindow();

        void gameLoop();
        void handleEvents();

        void updateDeltaTime();
        void update();
        void updateSplash();

        void render();


    public:
        void SetApplication(fApplication *application);
        void Start(int WIDTH, int HEIGHT, const char *TITLE, uint32_t STYLE);

        static fEngine *Get() { return s_instance = (s_instance != nullptr) ? s_instance : new fEngine(); }
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_LOOP_H
