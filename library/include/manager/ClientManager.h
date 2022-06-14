//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_CLIENTMANAGER_H
#define CARRENTAL_CLIENTMANAGER_H
#include "model/Client.h"
#include "repository/ClientRepository.h"

class ClientManager {
private:
    ClientRepository *clientRepository;
public:
    void remove(Client *client);
    void add(Client *client);
    void update(Client *client);

    virtual ~ClientManager();
};


#endif //CARRENTAL_CLIENTMANAGER_H
