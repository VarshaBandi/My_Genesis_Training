#include<iostream>
#include<cstring>

class Point
{
    int x,y;
    char n[10];
    public:
        Point(){x=y=0;}
        Point(int x1,int y1/*const char* name,int n*/)
        {
            //strcpy(n,name);
            x=x1;
            y=y1;
            //x=n;
        }
        void display()
        {
            // std::cout<<"\n x = "<<x;
            // std::cout<<"\n y = "<<y<<"\n";
            //std::cout<<"\n"<<n;
            //std::cout<<"() operator overloaded";
            std::cout<<x;
        }

        Point operator+(Point &p2)
        {
            Point sumobj;
            sumobj.x=this->x+p2.x;
            sumobj.y=this->y+p2.y;
            return sumobj;
        }

        Point operator-(Point &p2)
        {
            Point difobj;
            difobj.x=x-p2.x;
            difobj.y=y-p2.y;
            return difobj;
        }

        Point operator*(Point &p2)
        {
            Point mulobj;
            mulobj.x=x*p2.x;
            mulobj.y=y*p2.y;
            return mulobj;
        }

        Point operator/(Point &p2)
        {
            Point divobj;
            divobj.x=x/p2.x;
            divobj.y=y/p2.y;
            return divobj;
        }

        bool operator==(Point &p2)
        {
            bool flag = false;
            if(x==p2.x && y==p2.y)
            {
                flag = true;
            }
            return flag;
        }

        bool operator!=(Point &p2)
        {
            bool flag = true;
            if(x!=p2.x || y!=p2.y)
            {
                flag = false;
            }
            return flag;
        }

        char& operator[](int index)
        {
            return n[index];
        }

        void operator()()
        {
            display();
        }

        Point operator+=(int n)
        {
            x = x+n;
            return *this;
        }

        Point operator++()
        {
            ++x;
            return *this;
        }

        Point operator++(int)
        {
            Point temp;
            temp = *this;
            ++x;
            return temp;
        }
};

int main()
{
    //Point p1(2,5),p2(1,8);
    Point p1(1,2),p2(1,2);
    //Point p("Varsha");
    // Point p("Bandi");
    // char c = p[3];
    // std::cout<<c;
    // p[4]='s';
    // p.display();
    // Point s1;
    // s1();
    // Point p=5;
    // p += 4;
    // p.display();
    // Point p=5;
    // Point p1 = p++;
    // p1.display();


    // Point p3 = p1 + p2;
    // Point p4 = p1 - p2;
    // Point p5 = p1 * p2;
    // Point p6 = p1 / p2;
    //Point p1 ;
    // p1 += p2;
    // p1.display();
    // p3.display();
    // p4.display();
    // p5.display();
    // p6.display();
    // bool flag = p1==p2;
    // if(flag)
    // std::cout<<"Equal";
    // else
    // std::cout<<"Not equal";
    bool flag = p1!=p2;
    if(flag)
    std::cout<<"Equal";
    else
    std::cout<<"Not equal";
}