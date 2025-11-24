#include <stdio.h>

#define ROWS 4
#define COLS 10

void displaySeats(int seats[ROWS][COLS]) {
    printf("\n\t Seats\n");
    printf("\t");
    for (int j = 0; j < COLS; j++)
        printf("%3d", j + 1); // 3 spaces for proper column separation
    printf("\n");

    for (int i = 0; i < ROWS; i++) {
        printf("Row %2d:", i + 1); // Correctly labeled rows
        for (int j = 0; j < COLS; j++)
            printf("%3d", seats[i][j]); // 3 spaces for alignment
        printf("\n");
    }
}

void reserveSeat(int seats[ROWS][COLS]) {
    int row, col;
    printf("\nEnter row number (1-%d): ", ROWS);
    scanf("%d", &row);
    printf("Enter seat number (1-%d): ", COLS);
    scanf("%d", &col);

    // Validate input indices
    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        printf("Invalid seat selection!\n");
        return;
    }
    if (seats[row - 1][col - 1] == 1) {
        printf("Seat already reserved!\n");
        return;
    }
    seats[row - 1][col - 1] = 1;
    printf("Seat reserved successfully.\n");
}

void cancelReservation(int seats[ROWS][COLS]) {
    int row, col;
    printf("\nEnter row number (1-%d): ", ROWS);
    scanf("%d", &row);
    printf("Enter seat number (1-%d): ", COLS);
    scanf("%d", &col);

    // Validate input indices
    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        printf("Invalid seat selection!\n");
        return;
    }
    if (seats[row - 1][col - 1] == 0) {
        printf("Seat is not reserved.\n");
        return;
    }
    seats[row - 1][col - 1] = 0;
    printf("Reservation cancelled successfully.\n");
}

int main() {
    int seats[ROWS][COLS] = {0};
    int choice;

    do {
        printf("\n--- Seat Layout Management ---\n");
        printf("1. Display Seats\n");
        printf("2. Reserve Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: displaySeats(seats); break;
        case 2: reserveSeat(seats); break;
        case 3: cancelReservation(seats); break;
        case 4: printf("Exiting...\n"); break;
        default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
