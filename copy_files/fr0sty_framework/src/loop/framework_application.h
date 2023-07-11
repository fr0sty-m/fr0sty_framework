//
// Created by fr0sty on 20/06/2023.
//

#ifndef FR0STY_ENGINE_APPLICATION_H
#define FR0STY_ENGINE_APPLICATION_H

#include "framework_display.h"

namespace fr0sty {

    class fApplication {
    public:
        fApplication() = default;

        virtual void Begin() = 0;

        virtual void EarlyUpdate(float deltaTime) {};
        virtual void Update(float deltaTime) = 0;
        virtual void LateUpdate(float deltaTime) {};

        virtual void EarlyRender() {};
        virtual void Render() = 0;
        virtual void LateRender() {};
    };

}

#endif //FR0STY_ENGINE_APPLICATION_H
