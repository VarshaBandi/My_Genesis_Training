#include "Train.h"

Train::Train(std::string trainNumber, std::string trainStartingStation, std::string trainDestinationstation, int trainDepartureHour, int trainDepartureMinute, trainBookedTickets tickets)
  :_trainNumber(trainNumber),_trainStartingStation(trainStartingStation),_trainDestinationstation(trainDestinationstation),_trainDepartureHour(trainDepartureHour),_trainDepartureMinute(trainDepartureMinute),_BookedTickets(tickets)
{
}

std::ostream &operator<<(std::ostream &os, const Train &rhs) {
    os << "_trainNumber: " << rhs._trainNumber
       << " _trainStartingStation: " << rhs._trainStartingStation
       << " _trainDestinationstation: " << rhs._trainDestinationstation
       << " _trainDepartureHour: " << rhs._trainDepartureHour
       << " _trainDepartureMinute: " << rhs._trainDepartureMinute
       << " _trainBookedTickets: " << rhs._BookedTickets;
    return os;
}
