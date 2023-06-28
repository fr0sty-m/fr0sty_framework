//
// Created by fr0sty on 23/06/2023.
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

#ifndef FR0STY_ENGINE_FRAMEWORK_KEY_INPUT_H
#define FR0STY_ENGINE_FRAMEWORK_KEY_INPUT_H


#include <SFML/Window.hpp>

#define NUM_KEYS 322

namespace fr0sty {

    enum Keys {

        // PLayer 1 predefined keys
        GO_UP = sf::Keyboard::W,
        GO_DOWN = sf::Keyboard::S,
        GO_LEFT = sf::Keyboard::A,
        GO_RIGHT = sf::Keyboard::D,

        // Player 2 predefined keys
        ARROW_UP = sf::Keyboard::Up,
        ARROW_DOWN = sf::Keyboard::Down,
        ARROW_LEFT = sf::Keyboard::Left,
        ARROW_RIGHT = sf::Keyboard::Right,

        // Function keys
        USE = sf::Keyboard::E,
        TAB = sf::Keyboard::Tab,
        ENTER = sf::Keyboard::Enter,
        JUMP = sf::Keyboard::Space,

        // CTRL keys
        LCTRL = sf::Keyboard::LControl,
        RCTRL = sf::Keyboard::RControl,

        // ALT keys
        LALT = sf::Keyboard::LAlt,
        RALT = sf::Keyboard::RAlt,

    };

    class fKeyInput {
    private:
        static bool m_keyState[NUM_KEYS];

    public:
        fKeyInput();

        static void Update(sf::Event event);

        static bool IsKeyDown(int key) { return m_keyState[key]; }
        static bool IsKeyUp(int key) { return m_keyState[key]; }
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_KEY_INPUT_H
