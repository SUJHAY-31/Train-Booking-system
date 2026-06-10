#include <stdio.h>

int main() {
    int passengerId, tickets;
    char passengerName[50];
    float fare, totalFare;

    printf("Enter Passenger ID: ");
    scanf("%d", &passengerId);

    printf("Enter Passenger Name: ");
    scanf("%s", passengerName);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Fare per Ticket: ");
    scanf("%f", &fare);

    totalFare = tickets * fare;

    printf("\n----- Train Booking Receipt -----\n");
    printf("Passenger ID   : %d\n", passengerId);
    printf("Passenger Name : %s\n", passengerName);
    printf("Tickets Booked : %d\n", tickets);
    printf("Fare per Ticket: Rs. %.2f\n", fare);
    printf("Total Fare     : Rs. %.2f\n", totalFare);

    printf("\nBooking Confirmed!\n");

    return 0;
}
