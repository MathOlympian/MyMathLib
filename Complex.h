//
// Created by Evbuoma Osamudiame_Odegua on 26/06/2018.
//

#ifndef CLASS_CREATI_COMPLEX_H
#define CLASS_CREATI_COMPLEX_H


class Complex {
public:
    void output();
    void input();
    Complex operator -(Complex c);
    int operator *();

    Complex();

private:
    int real;
    int img;
};


#endif //CLASS_CREATI_COMPLEX_H
