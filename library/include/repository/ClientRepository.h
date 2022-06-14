//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_CLIENTREPOSITORY_H
#define CARRENTAL_CLIENTREPOSITORY_H
#include "Repository.h"
#include "model/Client.h"
#include "vector"
#include "algorithm"

class ClientRepository: public Repository<Client>{
private:
    std::vector<Client*>clients;
public:
    void add(Client *t) override;
    void remove(Client *t) override;

    virtual ~ClientRepository();
};


#endif //CARRENTAL_CLIENTREPOSITORY_H
