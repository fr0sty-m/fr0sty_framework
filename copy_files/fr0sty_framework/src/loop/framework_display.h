//
// Created by fr0sty on 21/06/2023.
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
