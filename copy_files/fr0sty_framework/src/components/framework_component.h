//
// Created by fr0sty on 24/06/2023.
//

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
