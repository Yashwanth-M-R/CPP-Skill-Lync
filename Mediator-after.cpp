#include <iostream>
#include <string>

class Mediator;

class User {
public:
    User(const std::string& name, Mediator* mediator) : name(name), mediator(mediator) {}

    void sendMessage(const std::string& message, User* receiver) {
        mediator->sendMessage(message, this, receiver);
    }

    void receiveMessage(const std::string& message) {
        std::cout << name << " received: " << message << std::endl;
    }

private:
    std::string name;
    Mediator* mediator;
};

class Mediator {
public:
    void addUser(User* user) {
        users.push_back(user);
    }

    void sendMessage(const std::string& message, User* sender, User* receiver) {
        receiver->receiveMessage(message);
    }

private:
    std::vector<User*> users;
};

int main() {
    Mediator mediator;

    User john("John", &mediator);
    User alice("Alice", &mediator);

    mediator.addUser(&john);
    mediator.addUser(&alice);

    john.sendMessage("Hello, Alice!", &alice);
    alice.sendMessage("Hi, John!", &john);

    return 0;
}

