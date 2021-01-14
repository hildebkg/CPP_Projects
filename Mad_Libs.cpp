#include <iostream>

int main() {
    
    std::string firstName;
    std::string adj1;
    std::string adj2;
    std::string verb1;
    std::string adj3;
    
    std::cout << "Your first name: ";
    std::cin >> firstName;
    
    std::cout << "Adjective: ";
    std::cin >> adj1;
    
    std::cout << "Adjective: ";
    std::cin >> adj2;
    
    std::cout << "Verb: ";
    std::cin >> verb1;
    
    std::cout << "Adjective: ";
    std::cin >> adj3;
    
    std::cout << "Welcome, " << firstName << "!" << std::endl;
    
    std::cout << "Practicing Python is so " << adj1 << "!" << std::endl;
    
    std::cout << "I am glad you decided to view my " << adj2 << " repository." << std::endl;
    
    std::cout << "If you want to " << verb1 << ", you should take a look at my other projects." << std::endl;
    
    std::cout << "Have a " << adj3 << " day!" << std::endl;
    
    return 0;
}
