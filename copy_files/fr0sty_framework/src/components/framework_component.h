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

#ifndef FR0STY_ENGINE_FRAMEWORK_COMPONENT_H
#define FR0STY_ENGINE_FRAMEWORK_COMPONENT_H

#include "utility/framework_vectors.h"
#include "utility/framework_color.h"
#include "loop/framework_display.h"

namespace fr0sty {

    struct fComponent {
        vec2_f m_pos;
        vec2_i m_size;

        fcolor m_neutralColor;
        fcolor m_hoverColor;
        fcolor m_clickedColor;
        const char* m_text;
        sf::Font m_font;

        virtual bool Init() = 0;

        virtual void Update() = 0;
        virtual void Render() = 0;


};

}

#endif //FR0STY_ENGINE_FRAMEWORK_COMPONENT_H
