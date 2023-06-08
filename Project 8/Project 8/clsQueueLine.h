#pragma warning (disable : 4996)
#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <queue>

using namespace std;

class clsQueueLine
{
	string _Perfix;
	short _AvrageTime;	
	short _ServedClients = 0;	
	short _TotaleTikets = 0;

	struct _Ticket {
		string TicketNum;
		string Date;				
		short WatingClients = 0;
	};

	queue <_Ticket> _MyTickets;

	string _GetDate()
	{
		time_t t = time(0);
		tm* d = localtime(&t);

		return to_string(d->tm_mday) + "/" + to_string(d->tm_mon + 1) + "/" +
			to_string(d->tm_year + 1900) + " - " + to_string(d->tm_hour) + ":" +
			to_string(d->tm_min) + ":" + to_string(d->tm_sec);
	}

	void _PrintCurrentTicket(_Ticket Ticket)
	{
		cout << "\n_____________________________\n";
		cout << "\t    " << Ticket.TicketNum << "\n\n";
		cout << "    " << Ticket.Date << "\n";
		cout << "    Wating Clients = " << Ticket.WatingClients - _ServedClients - 1 << "\n";
		cout << "    Serve Time in = " << (_AvrageTime * (Ticket.WatingClients - _ServedClients - 1)) << "\n";
		cout << "_____________________________\n";
	}

public:
	clsQueueLine(string Perfix, short AvrageTime)
	{
		_Perfix = Perfix;
		_AvrageTime = AvrageTime;
	}

	void IssueTicket()
	{				
		_TotaleTikets++;
		_Ticket new_Ticket;
		new_Ticket.WatingClients = _TotaleTikets;
		new_Ticket.TicketNum = _Perfix  + to_string(_TotaleTikets);
		new_Ticket.Date = _GetDate();
		
		_MyTickets.push(new_Ticket);		
	}

	void PrintInfo()
	{
		cout << "_____________________________\n";
		cout << "\tQueue Info\n";
		cout << "_____________________________\n";
		cout << "  Perfix         = " << _Perfix << endl;
		cout << "  Totale Tikets  = " << _TotaleTikets << endl;
		cout << "  Served Clients = " << _ServedClients << endl;
		cout << "  Wating Clients = " << (_TotaleTikets - _ServedClients) << endl;
		cout << "_____________________________\n";
	}

	void PrintTicketsRTL()
	{
		cout << "\n\nTickets : ";
		queue <_Ticket> _TempTickets;
		_TempTickets = _MyTickets;
		while (!_TempTickets.empty())
		{
			cout << _TempTickets.front().TicketNum << " <-- ";
			_TempTickets.pop();
		}
	}

	void PrintTicketsLTR()
	{
		cout << "\n\nTickets : ";
		queue <_Ticket> _TempTickets;

		while (!_MyTickets.empty())
		{
			_TempTickets.push(_MyTickets.front());			
			_MyTickets.pop();
		}

		while (!_TempTickets.empty())
		{
			_MyTickets.push(_TempTickets.front());
			cout << _MyTickets.front().TicketNum << " --> ";
			_TempTickets.pop();
		}
	}	

	void PrintAllTickets()
	{
		cout << "\n\n\n\t-- Tickets --\n";
		queue <_Ticket> _TempTickets;
		_TempTickets = _MyTickets;
		while (!_TempTickets.empty())
		{
			_PrintCurrentTicket(_TempTickets.front());
			_TempTickets.pop();
		}
	}

	void ServeNextClient()
	{
		_MyTickets.pop();
		_ServedClients++;
	}
};

