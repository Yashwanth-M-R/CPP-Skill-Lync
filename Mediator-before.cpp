#include <iostream>
#include <string>

class User {
public:
    User(const std::string& name) : name(name) {}

    void sendMessage(const std::string& message, User* receiver) {
        std::cout << name << " sent: " << message << std::endl;
        receiver->receiveMessage(message);
    }

    void receiveMessage(const std::string& message) {
        std::cout << name << " received: " << message << std::endl;
    }

private:
    std::string name;
};

int main() {
    User john("John");
    User alice("Alice");

    john.sendMessage("Hello, Alice!", &alice);
    alice.sendMessage("Hi, John!", &john);

    return 0;
}
