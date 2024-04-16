#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include"Tickettype.h"
#include"TicketClass.h"
#include <iostream>

class TrainTicket
{
private:
    float _ticketPrice;
    TicketType _tickettype;
    TicketClass _ticketclass;
public:
    TrainTicket()=delete;
    TrainTicket(const TrainTicket&)=delete;
    TrainTicket(TrainTicket&&)=delete;
    TrainTicket& operator=(const TrainTicket&)=delete;
    TrainTicket& operator=(TrainTicket&&)=delete;
     ~TrainTicket()=default;
    
    TrainTicket(float ticketPrice,TicketType tickettype,TicketClass ticketclass);

    float ticketPrice() const { return _ticketPrice; }

    TicketType tickettype() const { return _tickettype; }

    TicketClass ticketclass() const { return _ticketclass; }

    friend std::ostream &operator<<(std::ostream &os, const TrainTicket &rhs);
};

#endif // TRAINTICKET_H
