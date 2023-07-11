//
// Created by fr0sty on 21/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_CLOCK_H
#define FR0STY_ENGINE_FRAMEWORK_CLOCK_H

#include <iostream>

#include <SFML/System/Clock.hpp>

namespace fr0sty {

    class fClock {
    private:
        sf::Clock clock;
        sf::Time pausedTime;
        bool paused;

    public:
        fClock();

        void Start();
        void Stop();
        void Pause();
        void Unpause();

        uint32_t GetTicks();
        float GetSeconds();

        bool IsStarted();
        bool IsPaused();
    };

} // fr0sty

#endif //FR0STY_ENGINE_FRAMEWORK_CLOCK_H
