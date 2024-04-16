#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

class Employee
{
    int empid;
    std::string empname;
    int empsalary;
    public: 
        Employee(const Employee &emp)
        {
            empid = emp.empid;
            empname = emp.empname;
            empsalary = emp.empsalary;
            std::cout<<"copy constructor"<<empname<<"\n";
        }
        Employee(int id=1,std::string name="Varsha",int salary=25)
        {
            std::cout<<"constructor"<<"\n";
            empid = id;
            empname = name;
            empsalary = salary;
        }
        Employee &operator=(Employee &emp)
        {
            empid = emp.empid;
            empname = emp.empname;
            empsalary = emp.empsalary;
            std::cout<<"operator = "<<empname<<"\n";
            return *this;
        }

        std::string getEmpname() const { return empname; }
        void setEmpname(const std::string &empname_) { empname = empname_; }
        int getEmpid() const { return empid; }
        void setEmpid(int empid_) { empid = empid_; }

        friend std::istream& operator>>(std::istream &is,Employee &e1)
        {
            is>>e1.empid;
            is>>e1.empname;
            is>>e1.empsalary;
            return is;
        }
        friend std::ostream& operator<<(std::ostream &os,Employee &e1)
        {
            os<<e1.empid;
            os<<e1.empname;
            os<<e1.empsalary;
            return os;
        }
//         bool operator<(Employee &em)
//         {
//             return this->empsalary<em.empsalary;
//         }
//         bool operator==(std::string em)
//         {
//             return this->empname==em;
//         }
};


int main()
{
    #if 1
    std::vector<Employee> e;
    #else
    std::list<Employee> e;
    #endif

    for(int i=0;i<3;i++)
    {
        Employee ele;
        std::cin>>ele;
        e.push_back(ele);
    }
    Employee ep(1,"Bandi");
    e.insert(e.begin(),ep);

    //e.push_back(Employee(23,"Bandi",56));

}

