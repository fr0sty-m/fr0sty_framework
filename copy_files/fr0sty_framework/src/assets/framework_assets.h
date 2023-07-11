//
// Created by fr0sty on 21/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_ASSETS_H
#define FR0STY_ENGINE_FRAMEWORK_ASSETS_H

#include <SFML/Graphics.hpp>

#include "logging/framework_log.h"

#include "fr0sty_data.h"

namespace fr0sty {

    struct fAssets {
        static sf::Texture GetTexture(const char* path);

        static sf::Font GetFont(const char* path);
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_ASSETS_H
