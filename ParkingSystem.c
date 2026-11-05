#include <stdio.h>

#define MOTORCYCLE_RATE 2.0
#define SEDAN_COUPE_RATE 4.0
#define TRUCK_SUV_RATE 6.0
#define MAX_FEE 25.0

int readNumberInRange(int min, int max)
{
        int number;

        while (1)
        {
                if (scanf("%d", &number) != 1)
                {
                        printf("Invalid input. Enter a whole number from %d to %d: ", min, max);

                        // Clear invalid input from the buffer
                        while (getchar() != '\n');

                        continue;
                }

                if (number >= min && number <= max)
                {
                        return number;
                }

                printf("Invalid input. Enter a whole number from %d to %d: ", min, max);
        }
}

void displayMenu(void)
{
        printf("\n===== PARKING GARAGE FEE SYSTEM =====\n\n");
        printf("1. Process New Customer\n");
        printf("2. View Daily Summary\n");
        printf("3. Exit Program\n\n");
        printf("Enter your choice: ");
}

int main(void)
{
        int totalCustomers = 0;
        int motorcycleCount = 0;
        int sedanCount = 0;
        int coupeCount = 0;
        int truckCount = 0;
        int suvCount = 0;
        double totalRevenue = 0.0;

        int vehicleType = 0;
        int hours = 0;
        double fee = 0.0;

        int choice;
        int running = 1;


        while (running)
        {
                displayMenu();
                choice = readNumberInRange(1, 3);

                switch (choice)
                {
                        case 1:
                                // TODO: Process a customer and print a receipt
                                printf("\nCustomer processing is not implemented yet.\n");
                                break;

                        case 2:
                                // TODO: Display the daily summary
                                printf("\nDaily summary is not implemented yet.\n");
                                break;

                        case 3:
                                // TODO: Display the final daily summary before exiting
                                running = 0;
                                break;
                }
        }

        printf("\nThank you for using the Parking Garage Fee System!\n");
        return 0;
}
