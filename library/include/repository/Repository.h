//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_REPOSITORY_H
#define CARRENTAL_REPOSITORY_H

template<typename T>
class Repository {
public:
    virtual void add(T *t) = 0;
    virtual void remove(T *t) = 0;
};



#endif //CARRENTAL_REPOSITORY_H
