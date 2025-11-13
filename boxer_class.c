#include <stdio.h>

int main() {
    int weight;

    printf("Enter the weight: ");
    scanf("%d", &weight);

    if (weight < 115) {
        printf("Flyweight");
    }
    else if (weight >= 115 && weight <= 121) {
        printf("Bantamweight");
    }
    else if (weight >= 122 && weight <= 153) {
        printf("Featherweight");
    }
    else if (weight >= 154 && weight <= 189) {
        printf("Middleweight");
    }
    else if (weight >= 190) {
        printf("Heavyweight");
    }
    else {
        printf("Invalid input");
    }

    return 0;
}