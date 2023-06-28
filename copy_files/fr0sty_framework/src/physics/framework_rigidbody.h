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

#ifndef FR0STY_ENGINE_FRAMEWORK_RIGIDBODY_H
#define FR0STY_ENGINE_FRAMEWORK_RIGIDBODY_H

#include "objects/game_object.h"

namespace fr0sty {

    enum fForceType { GradualForce, SuddenForce };

    struct fRigidbody : public fGameObject {
        vec2_f velocity;
        float mass;

        void UpdateBody(float deltaTime);
        void UpdateBody(float deltaTime, vec2_f gravity);
        void Update(float deltaTime) override {}

        void AddForce(vec2_f vel, fForceType forceType = SuddenForce);
        void AddForce(float velX, float velY, fForceType forceType = SuddenForce);

        void AddForce(vec2_f vel, float increase, fForceType forceType = GradualForce);
        void AddForce(float velX, float velY, float increase = 0.013f, fForceType forceType = GradualForce);

        void RemoveForce(float decrease = 0.f, fForceType forceType = SuddenForce);
        void RemoveForceX(fForceType forceType = SuddenForce);
        void RemoveForceY(fForceType forceType = SuddenForce);

        vec2_f getVelocity() { return velocity; }
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_RIGIDBODY_H
