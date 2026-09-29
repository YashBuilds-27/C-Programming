🚗 Parking Management System

A simple Parking Management System written in C that allows users to manage two-wheeler and four-wheeler parking slots through a menu-driven console application.

📌 Features

- 🚘 Park a vehicle
- 🗑️ Remove a parked vehicle
- 🔍 Search for a parked vehicle
- 📋 Display all currently parked vehicles in a table
- 🅿️ Check available and occupied parking slots
- 🔢 Supports separate parking areas for:
  - Two Wheelers — 25 slots
  - Four Wheelers — 25 slots
- 🚫 Prevents duplicate vehicle numbers
- 🚪 Exit the application safely

🛠️ Technologies Used

- C Programming
- Standard C Libraries:
  - "stdio.h"
  - "string.h"

📊 Parking Capacity

Vehicle Type| Total Slots
Two Wheeler| 25
Four Wheeler| 25
Total| 50

⚙️ How It Works

When the program starts, it displays a menu:

===== PARKING MANAGEMENT SYSTEM =====
1. Park Vehicle
2. Remove Parked Vehicle
3. Search Parked Vehicle
4. Display Parked Vehicles
5. Available Slots for Parking
6. Exit

1. Park Vehicle

The user selects the vehicle type and enters the vehicle number.

Example:

Enter Vehicle Type:
1. Two Wheeler
2. Four Wheeler
Enter type: 1

Enter Vehicle Number: UP780010

Vehicle parked at Slot 1

The program checks whether the vehicle number is already parked before adding it.

2. Remove Parked Vehicle

The user enters the vehicle type and vehicle number.

If the vehicle is found, it is removed from the parking list.

Vehicle removed from Slot 1

3. Search Parked Vehicle

The program searches both parking areas and displays the vehicle type and slot number if the vehicle is found.

Vehicle found in Two Wheeler Parking at Slot 1

4. Display Parked Vehicles

All currently parked vehicles are displayed in a tabular format.

Example:

================ PARKED VEHICLES ================
Slot       Vehicle Type         Vehicle Number
--------------------------------------------------
1          Two Wheeler          UP780010
2          Two Wheeler          UP250021
1          Four Wheeler         UP320045
--------------------------------------------------

5. Available Slots

The program displays:

- Total slots
- Occupied slots
- Available slots

for both two-wheelers and four-wheelers, as well as the overall parking area.

🧠 Concepts Used

This project demonstrates several important C programming concepts:

- Arrays
- Two-dimensional character arrays
- Strings
- "strcmp()"
- "strcpy()"
- "if-else"
- "for" loops
- "while" loop
- Menu-driven programming
- Functions from "string.h"
- Basic parking/record management logic

▶️ How to Run

Using GCC

Compile the program:

gcc parking.c -o parking

Run it:

Windows

parking.exe

Linux / macOS

./parking

📁 Project Structure

Parking-Management-System/
│
├── parking.c
└── README.md

⚠️ Current Limitations

This is a beginner-level console application, so the data is stored only while the program is running.

- Maximum 25 two-wheelers
- Maximum 25 four-wheelers
- Data is lost when the program exits
- No file/database storage
- No graphical user interface

🚀 Future Improvements

Possible improvements include:

- [ ] Store parking records in a file
- [ ] Add entry and exit time
- [ ] Calculate parking charges
- [ ] Add date and time
- [ ] Add vehicle owner information
- [ ] Use functions to make the code modular
- [ ] Add admin login
- [ ] Add file-based permanent storage
- [ ] Improve slot management after vehicle removal

👨‍💻 Author

Yash

A C programming project created to practice arrays, strings, loops, conditions, and menu-driven programming.
