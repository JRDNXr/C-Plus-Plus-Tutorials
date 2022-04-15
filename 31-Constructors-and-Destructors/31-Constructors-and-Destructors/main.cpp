#include <iostream>
#include <vector>

class User {
    std::string status = "Employed"; // Data members
    
    public:
        std::string firstName;
        std::string lastName;
        std::string getStatus() {
            return status;
        }
        User() {
            std::cout << "Constructor" << std::endl;
        }
        User(std::string firstName, std::string lastName) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->status = status;
        }
        ~User() {
            std::cout << "Destructor" << std::endl;
        }
};

int add_user_if_not_exists(std::vector<User> &users, User user) {
    for (int i = 0; i <  users.size(); i++) {
        if (users[i].firstName == user.firstName && users[i].lastName == user.lastName) {
            return i;
        }
    }
    
    users.push_back(user);
    return users.size() - 1;
}

int main() {
    // Constructors is a special method that is called when a class is
    // instantiated into an object
    
    User user("JRDN", "D'Souza");
    std::cout << user.firstName << std::endl;
        
    return 0;
}
