#include<iostream>

class User
{
    std::string id;
    std::string username;
    std::string department;
    public:
        User();
        User(std::string,std::string,std::string);
        void accept();
        friend void operator>>(std::istream &is,User &us);
        bool operator==(User&);

        std::string getId() const { return id; }
        void setId(const std::string &id_) { id = id_; }

        std::string getUsername() const { return username; }
        void setUsername(const std::string &username_) { username = username_; }

        std::string getDepartment() const { return department; }
        void setDepartment(const std::string &department_) { department = department_; }
};