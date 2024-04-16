#include <iostream>

class MyClass {
public:
    int data;

    // Overloading the insertion operator
    friend std::ostream &operator<<(std::ostream& os, const MyClass& obj) {
        os << obj.data;
        return os; // Returning by value, allowing chaining
    }
};

int main() {
    MyClass obj;
    obj.data = 42;
    //std::ostream os; ->//Here we are getting error because we can't create a object to ostream and
    //when you cannot create object then you need to use reference compulsory

    std::cout << "The data is: " << obj << std::endl;

    return 0;
}
