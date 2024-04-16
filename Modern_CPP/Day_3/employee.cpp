#include<iostream>
#include<algorithm>
#include<vector>

class Employee
{
    int empid;
    std::string empname;
    int empsalary;
    public: 
        Employee(){}
        Employee(int id,std::string name,int salary)
        {
            empid = id;
            empname = name;
            empsalary = salary;
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
        bool operator<(Employee &em)
        {
            return this->empsalary<em.empsalary;
        }
        bool operator==(std::string em)
        {
            return this->empname==em;
        }
};


int main()
{
    std::vector<Employee> e;

    for(int i=0;i<3;i++)
    {
        Employee ele;
        std::cin>>ele;
        e.push_back(ele);
    }

    std::cout<<"Employee with highest salary: ";
    auto itr = std::max_element(e.begin(),e.end());
    std::cout<<*itr<<"\n";

    sort(e.begin(),e.end());
    for(Employee i:e)
    {
        std::cout<<i<<"\n";
    }

    std::cout<<"Enter the employee name to search: ";
    std::string n;
    std::cin>>n;

    //Employee key(0,n,13);

    itr = find(e.begin(),e.end(),n);
    if(itr == e.end())
    {
        std::cout<<"Name not found";
    }
    else
    {
        std::cout<<"Record found"<<"\n";
        std::cout<<*itr;
    }
}

