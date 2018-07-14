//
// Created by Evbuoma Osamudiame_Odegua on 26/06/2018.
//

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() : real(0), img(0)
{

}

void Complex::input()
{
    cout << "Enter complex number - real and imaginary respectively" << endl;
    cin >> real;
    cin >> img;
}

Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;

    return temp;
}

int Complex::operator*()
{
    return (real * real) + (img * img);
}

void Complex::output()
{
    if(img < 0)
        cout << real << "" << img << "i" << endl;
    else
        cout << real << "+" << img << "i" << endl;
}