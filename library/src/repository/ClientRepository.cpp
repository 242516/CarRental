//
// Created by Piotr on 13/06/2022.
//

#include "repository/ClientRepository.h"

void ClientRepository::add(Client *t) {
    clients.push_back(t);
}

void ClientRepository::remove(Client *t) {
    if (std::count(clients.begin(), clients.end(),t)) {
        clients.erase(std::remove(clients.begin(), clients.end(),t), clients.end());
    }
}

ClientRepository::~ClientRepository() {
    for (auto client :clients) {
        delete client;
    }
}
