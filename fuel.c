#include<stdio.h>

int main() {
    float liters, distance;

    // Ask user for input
    printf("Enter the no of liters to fill the tank\n");
    scanf("%f", &liters);
    if(liters <= 0) {
        printf("%.2f is an Invalid Input\n", liters);
        return 0;
    }
    
    printf("Enter the distance covered\n");
    scanf("%f", &distance);
    if(distance <= 0) {
        printf("%.2f is an Invalid Input\n", distance);
        return 0;
    }

    // European calculation: Liters per 100KM
    float litersPer100Km = (liters / distance) * 100;
    printf("Liters/100KM\n");
    printf("%.2f\n", litersPer100Km);

    // Conversion to miles and gallons
    float distanceInMiles = distance * 0.6214;
    float litersInGallons = liters * 0.2642;

    // US calculation: Miles per gallon
    float milesPerGallon = distanceInMiles / litersInGallons;
    printf("Miles/gallons\n");
    printf("%.2f\n", milesPerGallon);

    return 0;
}
