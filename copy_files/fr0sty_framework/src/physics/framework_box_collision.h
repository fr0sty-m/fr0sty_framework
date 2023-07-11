//
// Created by fr0sty on 23/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_BOX_COLLISION_H
#define FR0STY_ENGINE_FRAMEWORK_BOX_COLLISION_H

#include "utility/framework_vectors.h"

namespace fr0sty {

    typedef struct fBoxCollision {
        static bool isColliding(vec2_f box1_pos, vec2_f box1_size, vec2_f box2_pos, vec2_f box2_size) {
            // Check for horizontal overlap
            bool overlapX = (box1_pos.x < box2_pos.x + box2_size.x) && (box1_pos.x + box1_size.x > box2_pos.x);
            bool overlapY = (box1_pos.y < box2_pos.y + box2_size.y) && (box1_pos.y + box1_size.y > box2_pos.y);

            return overlapX && overlapY;
        }
    } fBoxCollision;

}

#endif //FR0STY_ENGINE_FRAMEWORK_BOX_COLLISION_H
