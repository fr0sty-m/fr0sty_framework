//
// Created by fr0sty on 21/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_DISPLAY_H
#define FR0STY_ENGINE_FRAMEWORK_DISPLAY_H

#include <SFML/Graphics.hpp>

#include <utility/framework_vectors.h>
#include "utility/framework_color.h"

namespace fr0sty {

    class fDisplay {
    private:
        static sf::RenderWindow* m_window;
    public:
        fDisplay(sf::RenderWindow* window) {
            m_window = window;
        }

        static void Clear(fcolor color);
        static void Display();

        static void DrawRect(vec2_f pos, vec2_f size, fcolor color);
        static void DrawRect(float x, float y, float w, float h, fcolor color);

        static void DrawRect(sf::RectangleShape shape);

        static void DrawText(vec2_f pos, vec2_f scale, fcolor color, const sf::Font& font, const char* textString, unsigned int charSize);
        static void DrawText(float x, float y, float scaleX, float scaleY, fcolor color, sf::Font font, sf::Text text);

        static void DrawLine(vec2_f pos1, vec2_f pos2, fcolor color);
        static void DrawLine(float x1, float y1, float x2, float y2, fcolor color);

        static void Draw(sf::Texture texture, vec2_f pos);
        static void Draw(sf::Texture texture, float x, float y);
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_DISPLAY_H
