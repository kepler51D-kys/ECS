#pragma once
template<typename T>
class v2 {
public:
	T x;
	T y;
	v2(T x, T y);
    v2 operator+(v2 other) const;
    v2 operator-(v2 other) const;
    void operator+=(v2 other);
    void operator-=(v2 other);
    v2 operator*(T other) const;
    v2 operator/(T other) const;
    void operator*=(T other);
    void operator/=(T other);
};
template<typename T>
class v3 {
public:
	T x;
	T y;
	T z;
	v3(T x, T y, T z);
    v3 operator+(v3 other) const;
    v3 operator-(v3 other) const;
    void operator+=(v3 other);
    void operator-=(v3 other);
    v3 operator*(T other) const;
    v3 operator/(T other) const;
    void operator*=(T other);
    void operator/=(T other);
};
template<typename T>
class v4 {
public:
	T x;
	T y;
	T z;
	T w;
	v4(T x, T y, T z, T w);
    v4 operator+(v4 other) const;
    v4 operator-(v4 other) const;
    void operator+=(v4 other);
    void operator-=(v4 other);
    v4 operator*(T other) const;
    v4 operator/(T other) const;
    void operator*=(T other);
    void operator/=(T other);
};
