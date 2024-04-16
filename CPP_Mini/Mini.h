#ifndef MINI_H
#define MINI_H

class Book
{
    int Bookid;
    char bookname[20];
    char authorname[20];
    int price;
    int NumberofdaysUsed;

    public:
        Book();
        Book(int,const char*);
        void accept();
        void display();

        int getdays()
        {
            return NumberofdaysUsed;
        }

        char* getname()
        {
            return bookname;
        }

        char* getaname()
        {
            return authorname;
        }

        int getPrice()
        {
            return price;
        }

        int bookid() const { return Bookid; }
        void setBookid(int bookid) { Bookid = bookid; }

        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }

        int numberofdaysUsed() const { return NumberofdaysUsed; }
        void setNumberofdaysUsed(int numberofdaysUsed) { NumberofdaysUsed = numberofdaysUsed; }
};

#endif // MINI_H
