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

#ifndef FR0STY_ENGINE_FRAMEWORK_BUTTON_H
#define FR0STY_ENGINE_FRAMEWORK_BUTTON_H

#include "framework_component.h"
#include "inputs/framework_mouse_input.h"

namespace fr0sty {

    class fButton : public fComponent {
    private:
        vec2_f pos;
        vec2_f size;

        sf::Font font;
        const char* fontPath;
        sf::Text m_text;
        int fontSize;

        fcolor neutralColor;
        fcolor hoverColor;
        fcolor clickedColor;

        fcolor textColor;

        const char *text;

        bool hover;
        bool clicked;

    public:
        fButton(float x = 0, float y = 0,
                float w = 213.f, float h = 53.f,
                const char* fontPath = "",
                int fontSize = 23,
                fcolor neutralColor = fcolor(53, 53, 53),
                fcolor hoverColor = fcolor(80, 80, 80),
                fcolor clickedColor = fcolor(150, 150, 150),
                const char *text = "Button",
                fcolor textColor = white
        )
                : pos(x, y), size(w, h),
                  fontPath(fontPath),
                  neutralColor(neutralColor),
                  hoverColor(hoverColor),
                  clickedColor(clickedColor),
                  text(text),
                  textColor(textColor) { Init(); }

        fButton(vec2_f pos = vec2_f(0, 0),
                vec2_f size = vec2_f(213.f, 53.f),
                int fontSize = 23,
                const char* fontPath = "",
                fcolor neutralColor = fcolor(73, 73, 73),
                fcolor hoverColor = fcolor(93, 93, 93),
                fcolor clickedColor = fcolor(150, 150, 150),
                const char *text = "Button",
                fcolor textColor = white
        )
                : pos(pos), size(size),
                  fontSize(fontSize),
                  fontPath(fontPath),
                  neutralColor(neutralColor),
                  hoverColor(hoverColor),
                  clickedColor(clickedColor),
                  text(text),
                  textColor(textColor) { Init(); }

        bool Init() override;

        void Update() override;

        void Render() override;

        bool IsClicked() { return clicked; }
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_BUTTON_H
