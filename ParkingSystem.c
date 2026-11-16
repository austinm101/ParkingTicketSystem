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

int getVehicleType(void)
{
    printf("===== NEW CUSTOMER =====\n");
    printf("Select Vehicle Type:\n");
    printf("1. Motorcycle\n2. Sedan\n3. Coupe\n4. Truck\n5. SUV");
    
    printf("Enter your choice: ");
    
    return readNumberInRange(1, 5);
}

void displayMenu(void)
{
        printf("\n===== PARKING GARAGE FEE SYSTEM =====\n\n");
        printf("1. Process New Customer\n");
        printf("2. View Daily Summary\n");
        printf("3. Exit Program\n\n");
        printf("Enter your choice: ");
}


void printDailySumary(int totalCustomers, int motorcycleCount, int sedanCount, int coupeCount, int truckCount, int suvCount, double totalRevenue, int isFinal)
{
    if(isFinal == 1)
    {
        printf("\n===== Final Daily Summary =====\n\n");
    }
    else
    {
        printf("\n===== Daily Summary\n\n");
    }

    printf("Total Customers: %d\n", totalCustomers);
    printf("Motorcycles:     %d\n", motorcycleCount);
    printf("Sedans:          %d\n", sedanCount);
    printf("Coupes:          %d\n", coupeCount);
    printf("Trucks:          %d\n", truckCount);
    printf("SUVs:            %d\n", truckCount);
    printf("Total Revenue:   %.2f\n", totalRevenue);

    if(totalCustomers == 0)
    {
        printf("\nNo customers have been processed yet.\n");
    }
}

int getParkingHours(void)
{
    printf("Enter hours parked (1-24): ");
    return readNumberInRange(1, 24);
}

double getHourlyRate(int vehicleType)
{
    switch (vehicleType)
    {
        case 1:
            return 2.00;
        case 2:
        case 3:
            return 4.00;
        case 4:
        case 5:
            return 6.00;
        default:
            return 0.00;
    }
}

double calculateFee(int vehicleType, int hours)
{
    double vehiclePrice = getHourlyRate(vehicleType);
    
    double totalFee = vehiclePrice * hours;
    if(totalFee >= 25.00)
    {
        return 25.00;
    }
    
    return totalFee;
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
                                getVehicleType();
                                getParkingHoure();
                                break;

                        case 2:
                                printDailySumary(totalCustomers, motorcycleCount, sedanCount, coupeCount, truckCount, suvCount, totalCustomers, 0);
                                break;

                        case 3:
                                printDailySumary(totalCustomers, motorcycleCount, sedanCount, coupeCount, truckCount, suvCount, totalCustomers, 1);                                
                                running = 0;
                                break;
                }
        }

        printf("\nThank you for using the Parking Garage Fee System!\n");
        return 0;
}
