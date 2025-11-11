#pragma once
template<typename T>
class v3 {
public:
    T x;
    T y;
    T z;
    v3(T X, T Y, T Z);
    v3 operator+(v3 other) const;
    v3 operator-(v3 other) const;
    void operator+=(v3 other);
    void operator-=(v3 other);
    v3 operator*(T other) const;
    v3 operator/(T other) const;
    void operator*=(T other);
    void operator/=(T other);
};