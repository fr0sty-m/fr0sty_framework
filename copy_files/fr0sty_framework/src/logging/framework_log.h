//
// Created by fr0sty on 21/06/2023.
//

#ifndef FR0STY_ENGINE_FRAMEWORK_LOG_H
#define FR0STY_ENGINE_FRAMEWORK_LOG_H

#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

namespace fr0sty {

    #ifdef ENABLE_LOGGING

    template<typename T>
    void engine_log(const T& msg) {
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << "[" << std::put_time(std::localtime(&now), "%H:%M:%S") << "] ";
        std::cout << "FR0STY: " << msg << std::endl;
    }

    template<typename T>
    void engine_log(const T& msg, const T& msg2) {
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << "[" << std::put_time(std::localtime(&now), "%H:%M:%S") << "] ";
        std::cout << "FR0STY: " << msg << " " << msg << std::endl;
    }

    template<typename T>
    void engine_error(const T& msg) {
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cerr << "[" << std::put_time(std::localtime(&now), "%H:%M:%S") << "] ";
        std::cerr << "FR0STY ERROR: " << msg << std::endl;
    }

    #else

    template<typename T>
    void engine_log(const T& /*msg*/) {
        // Logging is disabled
    }

    template<typename T>
    void engine_error(const T& /*msg*/) {
        // Logging is disabled
    }

    #endif

}

#endif //FR0STY_ENGINE_FRAMEWORK_LOG_H
