//
// Created by fr0sty on 24/06/2023.
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

#ifndef FR0STY_ENGINE_FRAMEWORK_MOUSE_INPUT_H
#define FR0STY_ENGINE_FRAMEWORK_MOUSE_INPUT_H

#include <SFML/Window/Mouse.hpp>
#include <SFML/Window/Event.hpp>

#include "utility/framework_vectors.h"

#define NUM_BUTTONS 5

namespace fr0sty {
    enum MouseButtons {
        LEFT_CLICK = sf::Mouse::Left,
        RIGHT_CLICK = sf::Mouse::Right,
        MIDDLE_CLICK = sf::Mouse::Middle,

        MOUSE_BUTTON_4 = sf::Mouse::XButton1,
        MOUSE_BUTTON_5 = sf::Mouse::XButton2,
    };

    class fMouseInput {
    private:
        static vec2_f m_mousePos;
        static bool m_buttonState[NUM_BUTTONS];

    public:
        fMouseInput() = default;

        static void Update(sf::Event event);

        static bool IsOver(float mx, float my, float x, float y, int w, int h);
        static bool IsOver(vec2_f mouse, vec2_f rect_pos, vec2_i rect_size);

        static bool IsClicked(vec2_f mouse, vec2_f rect_pos, vec2_i rect_size, int button);

        static bool IsButtonDown(int button) { return m_buttonState[button]; }
        static bool IsButtonUp(int button) { return m_buttonState[button]; }

        static vec2_f GetMousePos() { return m_mousePos; }

    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_MOUSE_INPUT_H
