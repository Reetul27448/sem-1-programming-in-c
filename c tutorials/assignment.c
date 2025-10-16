#include <stdio.h>
int main() {
    char vehicleNumber[10];
    int entryHour, entryMinute;
    int exitHour, exitMinute;
    int totalMinutes, totalHours;
    float totalAmount;
    printf("Enter Vehicle Number: ");
    scanf("%s", vehicleNumber);
    printf("Enter Entry Time (HH MM): ");
    scanf("%d %d", &entryHour, &entryMinute);
    printf("Enter Exit Time (HH MM): ");
    scanf("%d %d", &exitHour, &exitMinute);
    totalMinutes = (exitHour * 60 + exitMinute) - (entryHour * 60 + entryMinute);
    totalHours = (totalMinutes + 59) / 60; 
     if (totalHours <= 2) {
        totalAmount = totalHours * 5;
    } else {
        totalAmount = 2 * 5 + (totalHours - 2) * 3;
    }
    printf("\n----- Parking Bill -----\n");
    printf("Vehicle Number: %s\n", vehicleNumber);
    printf("Total Duration: %d hours\n", totalHours);
    printf("Total Amount: $%.2f\n", totalAmount);

    return 0;
}