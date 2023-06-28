//
// Created by fr0sty on 20/06/2023.
//

/*
MIT License

Copyright (c) 2023 fr0sty

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
