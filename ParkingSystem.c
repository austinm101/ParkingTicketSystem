#include <stdio.h>

int main(void)
{
    
    char CarType[5][15] = {"Sedan", "Truck", "SUV", "Coupe", "Sports Car"};

    int ParkingCharge, choice;
    
    printf("Welcome to our parking garage! Please select your vehicle type below.\n");
    printf("Please select your vehicle type below.\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, CarType[i]);
    }
    printf("Please select a car from the list: ");
    scanf("%d", &choice);
    
    return 0;

}