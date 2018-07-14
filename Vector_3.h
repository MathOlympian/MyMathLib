//
// Created by Evbuoma Osamudiame_Odegua on 26/06/2018.
//

#ifndef CLASS_CREATI_VECTOR_3_H
#define CLASS_CREATI_VECTOR_3_H

class Vector_3 {
public:
    Vector_3();  // parameterless constructor
    void input(); // receive input from user
    void output();
    Vector_3 operator * (Vector_3 vec);
    float dot (Vector_3 c);
    float magnitude();
    Vector_3 unit();
private:
    float i;
    float j;
    float k;
};


#endif //CLASS_CREATI_VECTOR_3_H
