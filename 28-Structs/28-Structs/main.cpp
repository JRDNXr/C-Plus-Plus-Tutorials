#include <iostream>

struct User {  // Think of these like header columns in a spreadsheet
    std::string firstName;
    std::string lastName;
    std::string getStatus() {
        return status; // Here we can access private variables since they
                       // are within the same struct (or class)
    }
    private:
        std::string status = "Employed";
};

int main() {
    User users;
    users.firstName = "JRDN";
    users.lastName = "D'Souza";
    //users.status = "Employed";
    
    std::cout << "First Name: " << users.firstName << std::endl;
    std::cout << "Last Name: " << users.lastName << std::endl;
    std::cout << "Status: " << users.getStatus() << std::endl;
    
    return EXIT_SUCCESS;
}

// Access modifiers

// Public: When we create an instance, these can be accessed
// Private: When we create an instance, these CANNOT be accessed anywhere.
//          They can accessed ONLY within the class
// Protected: Will extend down to any class or structure within it.

// Structs are by default public. Also known as PODS
// Classes are by default private

// Structs are great for holding pieces of data (like variables)
// Classes are great for holding
