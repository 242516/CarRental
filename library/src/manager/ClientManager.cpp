//
// Created by Piotr on 13/06/2022.
//

#include "manager/ClientManager.h"

void ClientManager::remove(Client *client) {
    clientRepository->remove(client);
}

void ClientManager::update(Client *client) {

}

void ClientManager::add(Client *client) {
    clientRepository->add(client);
}

ClientManager::~ClientManager() {
    delete clientRepository;
}
