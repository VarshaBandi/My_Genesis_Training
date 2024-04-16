#include<iostream>
#include<cstring>

class Book
{
    private:
        char* name;
        double price;
        int arr[3];
    public:
        void accept();
        void display();
        friend void operator<<(std::ostream &os,Book &s);
        Book();
        Book(const char* name, double price);
        ~Book();

        char* getName() const { return name; }
        void setName(char* name_) { name = name_; }

        double getPrice() const { return price; }
        void setPrice(double price_) { price = price_; }
};
