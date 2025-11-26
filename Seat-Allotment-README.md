# Seat Allotment Management System

## Introduction

The Seat Allotment Management System is a simple console-based application written in C that helps manage seat reservations in a small hall or classroom. It models a fixed layout of seats using a 2D array and allows the user to view, reserve, and cancel seats through a menu-driven interface.

## Purpose

The main goal of this project is to practice core C programming concepts such as arrays, functions, and basic input validation while simulating a real-life scenario of managing seat bookings. It provides a clear example of how 2D arrays can be used to represent grid-like structures such as seating layouts.

## Features

### Display Seats

Shows the current seating layout in a tabular format, with rows and seat numbers, where each seat is marked as 0 (available) or 1 (reserved).

### Reserve Seat

Allows the user to select a row and seat number; if the seat is within range and not already reserved, it is marked as reserved. Invalid selections and already booked seats are handled with proper messages.

### Cancel Reservation

Lets the user cancel an existing reservation by choosing a row and seat number. If the seat is reserved, it is reset to available; if it is not reserved or out of range, the program notifies the user.

### Exit

Closes the application safely after the user chooses the exit option from the menu.

## Implementation Details

### Seat Layout

The program uses a 2D integer array `seats[ROWS][COLS]` initialized to 0, where each element represents a seat (0 = free, 1 = reserved). The constants `ROWS` and `COLS` define the size of the hall (for example, 4 rows and 10 seats per row).

### Key Functions

- `displaySeats(int seats[ROWS][COLS])` – Prints the seat map with row labels and seat numbers in a tabular format
- `reserveSeat(int seats[ROWS][COLS])` – Books a seat after checking input validity and availability
- `cancelReservation(int seats[ROWS][COLS])` – Cancels a booked seat after validation
- `main()` – Shows the menu in a loop and calls the appropriate functions based on user choice

### Input Validation

The program checks that:
- Selected row and seat numbers are within the allowed range
- A seat is not double-booked
- Cancellation is only performed on reserved seats
- All user inputs are validated before processing

### Data Representation

- 0 = Seat is available
- 1 = Seat is reserved

## How to Compile and Run

1. Save the program as `seat_allotment_management.c`.

2. Compile the code using a C compiler such as GCC:
   ```bash
   gcc seat_allotment_management.c -o seat_allotment_management
   ```

3. Run the executable:
   ```bash
   ./seat_allotment_management
   ```

4. Use the menu to:
   - Display current seat layout
   - Reserve a seat
   - Cancel a reservation
   - Exit the program

## Sample Menu Output

```
--- Seat Layout Management ---
1. Display Seats
2. Reserve Seat
3. Cancel Reservation
4. Exit
Enter your choice:
```

### Sample Seating Display

```
     Seats
       1  2  3  4  5  6  7  8  9 10
Row  1: 0  1  0  1  0  0  1  0  1  0
Row  2: 1  0  0  0  1  0  0  0  0  1
Row  3: 0  0  1  0  0  1  0  1  0  0
Row  4: 1  1  0  0  0  0  1  0  1  1
```

## Technical Specifications

- **Language:** C (ANSI Standard)
- **Data Structure:** 2D Array
- **Dimensions:** 4 rows × 10 seats (configurable via ROWS and COLS macros)
- **No External Libraries Required**
- **Memory:** All data stored in program memory (no file persistence)

## Conclusion

This project demonstrates how basic C programming constructs—such as 2D arrays, functions, loops, and conditionals—can be used to build an interactive seat management tool. It is suitable for an introductory programming course project and can be extended further with features like:

- Different seat types or pricing
- Persistent file storage
- Customer name association with reservations
- Capacity tracking and reporting

## Author
pabolu vyshnavi

*ITP Project*  
*SAI University, Chennai*

---
