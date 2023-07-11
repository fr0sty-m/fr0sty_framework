//
// Created by fr0sty on 23/06/2023.
//

#ifndef FR0STY_ENGINE_GAME_OBJECT_H
#define FR0STY_ENGINE_GAME_OBJECT_H

#include "utility/framework_vectors.h"
#include "loop/framework_display.h"

namespace fr0sty {

    struct fGameObject {
        vec2_f position;
        vec2_f size;
        float mass;

        virtual void Init() = 0;
        virtual void Update(float deltaTime) = 0;
        virtual void Render(fDisplay *display) = 0;

        float GetPosX() const { return position.x; }
        float GetPosY() const { return position.x; }
    };


}

#endif //FR0STY_ENGINE_GAME_OBJECT_H
