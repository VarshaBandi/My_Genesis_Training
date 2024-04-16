#define TEMPLATE

#ifdef TEMPLATE
template <class T>
T mymax(T &a,T &b)
#else
int mymax(const int &a,const int &b)
#endif
{
    #ifdef TEMPLATE
    T large = a > b ? a : b;
    #else
    int large = a > b ? a : b;
    #endif
    return large;
}

int main()
{
    return 0;
}