#include "TrainTicket.h"

TrainTicket::TrainTicket(float ticketPrice, TicketType tickettype, TicketClass ticketclass)
    :_ticketPrice(ticketPrice),_tickettype(tickettype),_ticketclass(ticketclass)
{
}
std::ostream &operator<<(std::ostream &os, const TrainTicket &rhs) {
    os << "_ticketPrice: " << rhs._ticketPrice
       << " _tickettype: " << static_cast<int>(rhs._tickettype)
       << " _ticketclass: " << static_cast<int>(rhs._ticketclass);
    return os;
}
