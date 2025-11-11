#include "vectors.hpp"
template<class T>
v3<T>::v3(T X, T Y, T Z) {
    x = X;
    y = Y;
    z = Z;
}
template<class T>
v3<T> v3<T>::operator+(v3<T> other) const {
    v3(x+other.x,y+other.y,z+other.z);
}
template<class T>
v3<T> v3<T>::operator-(v3<T> other) const {
    v3(x-other.x,y-other.y,z-other.z);
}
template<class T>
void v3<T>::operator+=(v3<T> other) {
    x+=other.x;
    y+=other.y;
    z+=other.z;
}
template<class T>
void v3<T>::operator-=(v3<T> other) {
    x-=other.x;
    y-=other.y;
    z-=other.z;
}
template<class T>
v3<T> v3<T>::operator*(T other) const {
    v3(x*other,y*other,z*other);
}
template<class T>
v3<T> v3<T>::operator/(T other) const {
    v3(x/other,y/other,z/other);
}
template<class T>
void v3<T>::operator*=(T other) {
    x*=other;
    y*=other;
    z*=other;
}
template<class T>
void v3<T>::operator/=(T other) {
    x/=other;
    y/=other;
    z/=other;
}