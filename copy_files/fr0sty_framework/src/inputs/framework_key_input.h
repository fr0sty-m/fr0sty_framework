//
// Created by fr0sty on 23/06/2023.
//

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
