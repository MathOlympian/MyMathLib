//
// Created by Evbuoma Osamudiame_Odegua on 26/06/2018.
//

#include "Vector_3.h"
#include <string>
#include <iostream>
#include <cmath>

using  namespace std;

void Vector_3::output() {
    cout << "(" << i << ")" << "i " << "(" << j << ")" << "j " <<  "(" << k <<  ")" << "k" << endl;
}

Vector_3::Vector_3() : i(0), j(0), k(0) {

}

void Vector_3::input() {
    cout << "Enter vector - i, j, and k respectively" << endl;
    cin >> i;
    cin >> j;
    cin >> k;
}

Vector_3 Vector_3::operator * (Vector_3 vec) {
    Vector_3 temp;
    float a,b,c;
    float x,y,z;

    a = i; b = j; c = k;
    x = vec.i; y = vec.j; z = vec.k;

    /*
     * (ai + bj + ck) X (xi + yj + zk)
     * ai(xi + yj + zk) + bj(xi + yj + zk) + ck(xi + yj + zk)
     *
     * axi + ayk + yzi + -bxk + byj + bzi + -cxj -cyi + czk
     *
     * (ax + yz + bz - cy)i + (by - cx)j + (ay - bx + cz)k
     *
     * */
    temp.i = (a*x) + (y*z) + (b*z) - (c*y);
    temp.j = (b*y) - (c*z);
    temp.k = (a*y) - (b*x) + (c*z);

    return temp;
}

float Vector_3::dot(Vector_3 c) {

    return (i * c.i) + (j * c.j) + (k * c.k);
}

float Vector_3::magnitude() {

    return sqrtf((i*i) + (j*j) + (k*k));
}

Vector_3 Vector_3::unit() {
    Vector_3 temp;

    temp.i = i;
    temp.j = j;
    temp.k = k;

    temp.i = temp.i / temp.magnitude();
    temp.j = temp.j / temp.magnitude();
    temp.k = temp.k / temp.magnitude();

    return temp;
}
