//
// Created by fr0sty on 21/06/2023.
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
