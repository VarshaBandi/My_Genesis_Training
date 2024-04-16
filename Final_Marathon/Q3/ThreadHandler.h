#ifndef THREADHANDLER_H
#define THREADHANDLER_H

#include<thread>
#include<mutex>
#include<condition_variable>
#include <iostream>
#include<vector>

class ThreadHandler
{
private:
    std::mutex mt;
    int _square_val;
    bool _square_val_available{false};
    int _value;
    std::condition_variable cv;
    std::vector<int> vec;
public:
    ThreadHandler()=delete;
    ThreadHandler(const ThreadHandler&)=delete;
    ThreadHandler(ThreadHandler&&)=delete;
    ThreadHandler& operator=(const ThreadHandler& )=default;
    ThreadHandler& operator=(ThreadHandler&&)=default;
     ~ThreadHandler()=default;

    explicit ThreadHandler(int value):_value(value){}

    void InputCapture();
    void Operation();

    int value() const { return _value; }
    const std::condition_variable& getCv() const { return cv; }
    bool squareValAvailable() const { return _square_val_available; }
    void setSquareValAvailable(bool square_val_available) { _square_val_available = square_val_available; }
    std::vector<int> getVec() const { return vec; }

    friend std::ostream &operator<<(std::ostream &os, const ThreadHandler &rhs);
};


#endif // THREADHANDLER_H
