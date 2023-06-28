//
// Created by fr0sty on 20/06/2023.
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

#ifndef FR0STY_ENGINE_FRAMEWORK_VECTORS_H
#define FR0STY_ENGINE_FRAMEWORK_VECTORS_H

template<typename T>
struct vec2 {
    T x, y;

    vec2() : x(0), y(0) {}
    vec2(T x, T y) : x(x), y(y) {}
    vec2(const vec2& vec) : x(vec.x), y(vec.y) {}

    vec2 operator=(const vec2& vec) {
        return vec2(x = vec.x, y = vec.y);
    }

    vec2 operator+(const vec2& vec) {
        return vec2(x + vec.x, y + vec.y);
    }

    vec2 operator-(const vec2& vec) {
        return vec2(x - vec.x, y - vec.y);
    }

    vec2 operator*(const vec2& vec) {
        return vec2(x * vec.x, y * vec.y);
    }

    vec2 operator+=(const vec2& vec) {
        return vec2(x += vec.x, y += vec.y);
    }

    vec2 operator-=(const vec2& vec) {
        return vec2(x -= vec.x, y -= vec.y);
    }



    vec2 operator=(const T scalar) {
        return vec2(x = scalar, y = scalar);
    }

    vec2 operator+(const T scalar) {
        return vec2(x + scalar, y + scalar);
    }

    vec2 operator-(const T scalar) {
        return vec2(x - scalar, y - scalar);
    }

    vec2 operator*(const T scalar) {
        return vec2(x * scalar, y * scalar);
    }

    vec2 operator+=(const T scalar) {
        return vec2(x += scalar, y += scalar);
    }

    vec2 operator-=(const T scalar) {
        return vec2(x -= scalar, y -= scalar);
    }

};

template<typename T>
struct vec3 {
    T x, y, z;

    vec3() : x(0), y(0), z(0) {}
    vec3(T x, T y, T z) : x(x), y(y), z(z) {}
    vec3(const vec3& vec) : x(vec.x), y(vec.y), z(vec.z) {}

    vec3 operator=(const vec3& vec) {
        return vec3(x = vec.x, y = vec.y, z = vec.z);
    }

    vec3 operator+(const vec3& vec) {
        return vec3(x + vec.x, y + vec.y, z + vec.z);
    }

    vec3 operator-(const vec3& vec) {
        return vec3(x - vec.x, y - vec.y, z - vec.z);
    }

    vec3 operator*(const vec3& vec) {
        return vec3(x * vec.x, y * vec.y, z * vec.z);
    }

    vec3 operator+=(const vec3& vec) {
        return vec3(x += vec.x, y += vec.y, z += vec.z);
    }

    vec3 operator-=(const vec3& vec) {
        return vec3(x -= vec.x, y -= vec.y, z -= vec.z);
    }



    vec3 operator=(const T scalar) {
        return vec3(x = scalar, y = scalar, z = scalar);
    }

    vec3 operator+(const T scalar) {
        return vec3(x + scalar, y + scalar, z + scalar);
    }

    vec3 operator-(const T scalar) {
        return vec3(x - scalar, y - scalar, z - scalar);
    }

    vec3 operator*(const T scalar) {
        return vec3(x * scalar, y * scalar, z * scalar);
    }

    vec3 operator+=(const T scalar) {
        return vec3(x += scalar, y += scalar, z += scalar);
    }

    vec3 operator-=(const T scalar) {
        return vec3(x -= scalar, y -= scalar, z -= scalar);
    }
};

template<typename T>
struct vec4 {
    T x, y, z, w;

    vec4() : x(0), y(0), z(0), w(0) {}
    vec4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w) {}
    vec4(const vec4& vec) : x(vec.x), y(vec.y), z(vec.z), w(vec.w) {}

    vec4 operator=(const vec4& vec) {
        return vec4(x = vec.x, y = vec.y, z = vec.z, w = vec.w);
    }

    vec4 operator+(const vec4& vec) {
        return vec4(x + vec.x, y + vec.y, z + vec.z, w = vec.w);
    }

    vec4 operator-(const vec4& vec) {
        return vec4(x - vec.x, y - vec.y, z - vec.z, w - vec.w);
    }

    vec4 operator*(const vec4& vec) {
        return vec4(x * vec.x, y * vec.y, z * vec.z, w * vec.w);
    }

    vec4 operator+=(const vec4& vec) {
        return vec4(x += vec.x, y += vec.y, z += vec.z, w += vec.w);
    }

    vec4 operator-=(const vec4& vec) {
        return vec4(x -= vec.x, y -= vec.y, z -= vec.z, w -= vec.w);
    }



    vec4 operator=(const T scalar) {
        return vec4(x = scalar, y = scalar, z = scalar, w = scalar);
    }

    vec4 operator+(const T scalar) {
        return vec4(x + scalar, y + scalar, z + scalar, w + scalar);
    }

    vec4 operator-(const T scalar) {
        return vec4(x - scalar, y - scalar, z - scalar, w - scalar);
    }

    vec4 operator*(const T scalar) {
        return vec4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    vec4 operator+=(const T scalar) {
        return vec4(x += scalar, y += scalar, z += scalar, w += scalar);
    }

    vec4 operator-=(const T scalar) {
        return vec4(x -= scalar, y -= scalar, z -= scalar, w -= scalar);
    }

};

typedef vec2<int> vec2_i;
typedef vec2<float> vec2_f;
typedef vec2<double> vec2_d;

typedef vec3<int> vec3_i;
typedef vec3<float> vec3_f;
typedef vec3<double> vec3_d;

typedef vec4<int> vec4_i;
typedef vec4<float> vec4_f;
typedef vec4<double> vec4_d;

#endif //FR0STY_ENGINE_FRAMEWORK_VECTORS_H
