//
// Created by fr0sty on 23/06/2023.
//

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
