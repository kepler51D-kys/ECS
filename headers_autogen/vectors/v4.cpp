#include "vectors.hpp"
template<class T>
v4<T>::v4(T X, T Y, T Z, T W) {
    x = X;
    y = Y;
    z = Z;
    w = W;
}
template<class T>
v4<T> v4<T>::operator+(v4<T> other) const {
    v4(x+other.x,y+other.y,z+other.z,w+other.w);
}
template<class T>
v4<T> v4<T>::operator-(v4<T> other) const {
    v4(x-other.x,y-other.y,z-other.z,w+other.w);
}
template<class T>
void v4<T>::operator+=(v4<T> other) {
    x+=other.x;
    y+=other.y;
    z+=other.z;
    w+=other.w;
}
template<class T>
void v4<T>::operator-=(v4<T> other) {
    x-=other.x;
    y-=other.y;
    z-=other.z;
    w-=other.w;
}
template<class T>
v4<T> v4<T>::operator*(T other) const {
    v4(x*other,y*other,z*other,w*other);
}
template<class T>
v4<T> v4<T>::operator/(T other) const {
    v4(x/other,y/other,z/other,w/other);
}
template<class T>
void v4<T>::operator*=(T other) {
    x*=other;
    y*=other;
    z*=other;
    w*=other;
}
template<class T>
void v4<T>::operator/=(T other) {
    x/=other;
    y/=other;
    z/=other;
    w/=other;
}