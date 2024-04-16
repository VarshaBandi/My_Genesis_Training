#include<cstring>
#include<iostream>
class Mobile
{
    // char brand[30];
    // char model[30];
    private:
        char *brand;
        char *model;
        int capacity;

    public:
        Mobile();
        Mobile(const char*,const char*,int);
        ~Mobile();
        friend void operator<<(std::ostream &s,Mobile &m);
        friend void operator>>(std::ostream &s,Mobile &m);
        void accept();
        void display();
        void setBrand(const char *n)
        {
            strcpy(brand,n);
        }
        char* getBrand()
        {
            return brand;
        }
        void setModel(const char *n)
        {
            strcpy(model,n);
        }
        char* getModel()
        {
            return model;
        }

        int getCapacity() const { return capacity; }
        void setCapacity(int capacity_) { capacity = capacity_; }


};