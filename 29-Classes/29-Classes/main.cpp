#include <iostream>

class User {
    std::string status = "Employed"; // Data members
    
    public:
        std::string firstName;
        std::string lastName;
        std::string getStatus() {
            return status;
        }
    
        // This is a method
        // Methods are functions attached to objects
};

// When we create classes, we are essentially creating a Type.
// int and string are Types. When we create User, we are creating a Type
// called User. This is especially important for vectors

int main() {
    User users;
    users.firstName = "JRDN";
    users.lastName  = "D'Souza";
    
    std::cout << "Status: " << users.getStatus() << std::endl;
    
    return EXIT_SUCCESS;
}
