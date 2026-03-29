#include <stdio.h>

int main(){
    int seats[100] = {0}; // 0 indicates available, 1 indicates booked
    
    printf("Welcome to the Railway Reservation System\n");
    int choice;
    while(1){
        printf("1. Book a seat\n2. Cancel a booking\n3. View seat status\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            int seat_number;
            printf("Enter seat number to book (1-100): ");
            scanf("%d", &seat_number);
            if(seat_number < 1 || seat_number > 100){
                printf("Invalid seat number!\n");
            } else if(seats[seat_number - 1] == 1){
                printf("Seat already booked!\n");
            } else {
                seats[seat_number - 1] = 1;
                printf("Seat %d booked successfully!\n", seat_number);
            }
        } else if(choice == 2){
            int seat_number;
            printf("Enter seat number to cancel (1-100): ");
            scanf("%d", &seat_number);
            if(seat_number < 1 || seat_number > 100){
                printf("Invalid seat number!\n");
            } else if(seats[seat_number - 1] == 0){
                printf("Seat is not booked!\n");
            } else {
                seats[seat_number - 1] = 0;
                printf("Booking for seat %d cancelled successfully!\n", seat_number);
            }
        } else if(choice == 3){
            printf("Seat Status:\n");
            for(int i = 0; i < 100; i++){
                printf("Seat %d: %s\n", i + 1, seats[i] ? "Booked" : "Available");
            }
        } else if(choice == 4){
            printf("Exiting the system. Thank you!\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}