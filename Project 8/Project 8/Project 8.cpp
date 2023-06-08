#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{
    clsQueueLine PayBillsQueue("A0", 5);    

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    PayBillsQueue.PrintInfo();
    PayBillsQueue.PrintTicketsRTL();
    PayBillsQueue.PrintTicketsLTR();

    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    PayBillsQueue.PrintAllTickets();
    PayBillsQueue.PrintInfo();



    system("pause>0");
}