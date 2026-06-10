#include <iostream>
#include <string>
using namespace std;

int main() {
    int passengerId, tickets;
    string passengerName;
    float fare, totalFare;

    cout << "Enter Passenger ID: ";
    cin >> passengerId;

    cout << "Enter Passenger Name: ";
    cin >> passengerName;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    cout << "Enter Fare per Ticket: ";
    cin >> fare;

    totalFare = tickets * fare;

    cout << "\n----- Train Booking Receipt -----" << endl;
    cout << "Passenger ID   : " << passengerId << endl;
    cout << "Passenger Name : " << passengerName << endl;
    cout << "Tickets Booked : " << tickets << endl;
    cout << "Fare per Ticket: Rs. " << fare << endl;
    cout << "Total Fare     : Rs. " << totalFare << endl;

    cout << "\nBooking Confirmed!" << endl;

    return 0;
}
