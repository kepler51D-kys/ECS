#include "vectors.hpp"
template<class T>
v2<T>::v2(T X, T Y) {
    x = X;
    y = Y;
}
template<class T>
v2<T> v2<T>::operator+(v2<T> other) const {
    v2(x+other.x,y+other.y);
}
template<class T>
v2<T> v2<T>::operator-(v2<T> other) const {
    v2(x-other.x,y-other.y);
}
template<class T>
void v2<T>::operator+=(v2<T> other) {
    x+=other.x;
    y+=other.y;
}
template<class T>
void v2<T>::operator-=(v2<T> other) {
    x-=other.x;
    y-=other.y;
}
template<class T>
v2<T> v2<T>::operator*(T other) const {
    v2(x*other,y*other);
}
template<class T>
v2<T> v2<T>::operator/(T other) const {
    v2(x/other,y/other);
}
template<class T>
void v2<T>::operator*=(T other) {
    x*=other;
    y*=other;
}
template<class T>
void v2<T>::operator/=(T other) {
    x/=other;
    y/=other;
}