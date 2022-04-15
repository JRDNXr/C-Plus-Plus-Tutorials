#include <iostream>

class User {
    std::string status = "Gold";
    
    public:
        std::string firstName;
        
        std::string getStatus() {
            return status;
        }
        void setStatus(std::string status) {
            this->status = status;
        }
};

int main() {
    
}
