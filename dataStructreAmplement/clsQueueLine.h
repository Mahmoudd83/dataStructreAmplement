#pragma once
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class clsQueueLine
{
private:
    string prefix = "QLN";
    short waitime = 5; // in minutes
    int ticketCounter = 0;
    int servedCounter = 0;

    struct stData {
        string prefix;
        int waitingClient;
        int serviceClient;
        int serviceTime;
    };

    struct QueueInfo {
        string prefix;
        int totalClients;
        int waitingClients;
        int serviceClient;
    };

    queue<stData> m_Queue;

public:
    clsQueueLine(string pref, short wait) {
        prefix = pref;
        waitime = wait;
    }

    clsQueueLine() {}

    void IssueTicket() {
        stData data;
        data.prefix = prefix + to_string(++ticketCounter);
        data.waitingClient = m_Queue.size() + 1;
        data.serviceClient = 0;
        data.serviceTime = data.waitingClient * waitime;
        m_Queue.push(data);

        cout << "Issued Ticket: " << data.prefix
            << " | Position: " << data.waitingClient
            << " | Estimated Time: " << data.serviceTime << " min" << endl;
    }

    void ServeClient() {
        if (!m_Queue.empty()) {
            stData served = m_Queue.front();
            served.serviceClient = ++servedCounter;
            cout << "Serving client: " << served.prefix << endl;
            m_Queue.pop();
        }
        else {
            cout << "No clients in the queue." << endl;
        }
    }

    void Print() {
        if (m_Queue.empty()) {
            cout << "No clients in the queue." << endl;
            return;
        }

        queue<stData> tempQueue = m_Queue;
        while (!tempQueue.empty()) {
            stData data = tempQueue.front();
            cout << "Ticket: " << data.prefix << "-" << data.waitingClient
                << " | Estimated Service Time: " << data.serviceTime << " minutes" << endl;
            tempQueue.pop();
        }
    }

    void GetQueueInfo() {
        if (m_Queue.empty()) {
            cout << "No clients in the queue.\n";
            return;
        }

        QueueInfo info;
        info.prefix = prefix;
        info.totalClients = m_Queue.size();
        info.serviceClient = servedCounter;
        info.waitingClients = info.totalClients;

        cout << "\nQueue Prefix: " << info.prefix << endl;
        cout << "Total Clients in Queue: " << info.totalClients << endl;
        cout << "Clients Served: " << info.serviceClient << endl;
        cout << "Clients Waiting: " << info.waitingClients << endl;
    }
};
