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

#ifndef FR0STY_ENGINE_FRAMEWORK_COLOR_H
#define FR0STY_ENGINE_FRAMEWORK_COLOR_H

#include <SFML/Graphics.hpp>

namespace fr0sty {

    typedef struct fcolor {

        uint8_t r, g, b, a;

        fcolor()                                     :       r(0), g(0), b(0), a(255)    {}
        fcolor(float r, float g, float b)            :       r(r), g(g), b(b), a(255)    {}
        fcolor(float r, float g, float b, float a)   :       r(r), g(g), b(b), a(a)      {}

        static sf::Color changeToSFML(const fcolor& color) {
            return sf::Color(color.r, color.g, color.b, color.a);
        }


    } fcolor;

    static const fcolor white = fcolor(255, 255, 255);
    static const fcolor black = fcolor();
    static const fcolor dark_gray = fcolor(33, 33, 33);

    static const fcolor red = fcolor(172, 50, 50);
    static const fcolor yellow = fcolor(251, 242, 54);
    static const fcolor green = fcolor(106, 190, 48);
    static const fcolor blue = fcolor(0, 102, 182);


}	// 		 !fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_COLOR_H
