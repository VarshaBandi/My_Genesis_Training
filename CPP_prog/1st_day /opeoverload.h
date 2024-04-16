#include<iostream>
#include<cstring>

class oper
{
    char *name;
    int id;
    int score[3];

    public:
        oper();
        oper(int,const char*,int []);
        void accept();
        void display();
        friend std::ostream& operator<<(std::ostream &os,oper &op);
        char& operator[](int);
        bool operator==(oper&);
        bool operator<(oper&);
        float calavg();
        void setname(const char* n)
        {
            n = new char[strlen(name)+1];
            strcpy(name,n);
        }
        char* getname()
        {
            return name;
        }

        int getId() const { return id; }
        void setId(int id_) { id = id_; }
};