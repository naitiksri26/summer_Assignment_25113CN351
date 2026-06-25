#include <stdio.h>
#include <string.h>

struct ticket
{
    int pnr;
    char name[30];
    char destination[30];
    int seats;
    int status;
};

int main()
{
    struct ticket t[50];
    int n = 0, ch, i, pnr;

    do
    {
        printf("\n----- TICKET BOOKING SYSTEM -----\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Cancel Ticket\n");
        printf("4. Search Ticket\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            n++;
            t[n - 1].pnr = 1000 + n;
            printf("Enter passenger name: ");
            scanf(" %[^\n]", t[n - 1].name);
            printf("Enter destination: ");
            scanf(" %[^\n]", t[n - 1].destination);
            printf("Enter number of seats: ");
            scanf("%d", &t[n - 1].seats);
            t[n - 1].status = 1;
            printf("Ticket booked successfully. PNR: %d\n", t[n - 1].pnr);
            break;

        case 2:
            if (n == 0)
            {
                printf("No tickets available.\n");
                break;
            }
            printf("\nPNR\tName\t\tDestination\tSeats\tStatus\n");
            for (i = 0; i < n; i++)
                printf("%d\t%s\t\t%s\t\t%d\t%s\n", t[i].pnr, t[i].name, t[i].destination, t[i].seats, t[i].status ? "Booked" : "Cancelled");
            break;

        case 3:
            printf("Enter PNR to cancel: ");
            scanf("%d", &pnr);
            for (i = 0; i < n; i++)
            {
                if (t[i].pnr == pnr)
                {
                    if (t[i].status == 1)
                    {
                        t[i].status = 0;
                        printf("Ticket cancelled successfully.\n");
                    }
                    else
                        printf("Ticket already cancelled.\n");
                    break;
                }
            }
            if (i == n)
                printf("PNR not found.\n");
            break;

        case 4:
            printf("Enter PNR to search: ");
            scanf("%d", &pnr);
            for (i = 0; i < n; i++)
            {
                if (t[i].pnr == pnr)
                {
                    printf("PNR: %d\nName: %s\nDestination: %s\nSeats: %d\nStatus: %s\n", t[i].pnr, t[i].name, t[i].destination, t[i].seats, t[i].status ? "Booked" : "Cancelled");
                    break;
                }
            }
            if (i == n)
                printf("PNR not found.\n");
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    } while (ch != 5);

    return 0;
}