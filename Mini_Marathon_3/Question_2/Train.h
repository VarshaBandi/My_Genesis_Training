#ifndef TRAIN_H
#define TRAIN_H
#include<functional>
#include<string>
#include<memory>
#include <ostream>
#include"TrainTicket.h"

using trainBookedTickets = std::shared_ptr<TrainTicket>;
class Train
{
private:
    std::string _trainNumber;
    std::string _trainStartingStation;
    std::string _trainDestinationstation;
    int _trainDepartureHour;
    int _trainDepartureMinute;
     trainBookedTickets _BookedTickets;
public:
    Train()=delete;
    Train(const Train&)=delete;
    Train(Train&&)=delete;
    Train& operator=(const Train&)=delete;
    Train& operator=(Train&&)=delete;
     ~Train()=default;

    Train(std::string trainNumber,std::string trainStartingStation,std::string trainDestinationstation,int trainDepartureHour,int trainDepartureMinute,trainBookedTickets tickets);

    std::string trainNumber() const { return _trainNumber; }
    void setTrainNumber(const std::string &trainNumber) { _trainNumber = trainNumber; }

    std::string trainStartingStation() const { return _trainStartingStation; }
    void setTrainStartingStation(const std::string &trainStartingStation) { _trainStartingStation = trainStartingStation; }

    std::string trainDestinationstation() const { return _trainDestinationstation; }
    void setTrainDestinationstation(const std::string &trainDestinationstation) { _trainDestinationstation = trainDestinationstation; }

    int trainDepartureHour() const { return _trainDepartureHour; }
    void setTrainDepartureHour(int trainDepartureHour) { _trainDepartureHour = trainDepartureHour; }

    int trainDepartureMinute() const { return _trainDepartureMinute; }

    //trainBookedTickets trainBookedTickets() const { return _BookedTickets; }

    trainBookedTickets bookedTickets() const { return _BookedTickets; }
    void setBookedTickets(const trainBookedTickets &BookedTickets) { _BookedTickets = BookedTickets; }

    friend std::ostream &operator<<(std::ostream &os, const Train &rhs);

};

#endif // TRAIN_H
