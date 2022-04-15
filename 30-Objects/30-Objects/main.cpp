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
    /*User user;
    user.firstName = "JRDN";
    user.lastName  = "D'Souza";*/
    
    std::vector<User> users;
    //users.push_back(User()); // Passes the user into this vector
    
    User user1, user2, user3;
    
    user1.firstName = "Sally";
    user1.lastName = "Swan";
    
    user2.firstName = "Jake";
    user2.lastName = "Johnson";
    
    user3.firstName = "JRDN";
    user3.lastName = "D'Souza";
    
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);
    
    User user;
    user.firstName = "Jacob";
    user.lastName = "Johnson";
    
    std::cout << add_user_if_not_exists(users, user) << std::endl;
    
    std::cout << users.size() << std::endl;
    
    return 0;
}
