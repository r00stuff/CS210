# CS210

# Corner Grocer Item-Tracking Program

## Introduction
The **Corner Grocer Item-Tracking Program** is a C++ application designed to analyze item purchases at a grocery store and provide detailed information about item frequencies. The program allows users to search for specific items, display a complete list of item frequencies, and visualize item quantities in the form of a histogram. Additionally, the program creates a backup data file to store item frequencies for future retrieval.

## Design Overview
The program follows an object-oriented programming (OOP) approach and is designed with industry standards for code structure and readability in mind.

### Components:
1. **Class Definition (GroceryTracker)**:
   - The `GroceryTracker` class is responsible for all core functionality, including reading item data, tracking frequencies, writing backup files, and displaying results to the user.
   - **Private Members**:
     - `itemFrequency`: A `std::map` storing items as keys and their purchase frequencies as values.
   - **Public Methods**:
     - `loadDataFromFile()`: Reads item data from a text file and updates the frequency map.
     - `writeBackupToFile()`: Writes the current item frequencies to a backup file (`frequency.dat`).
     - `getItemFrequency()`: Returns the frequency of a specific item.
     - `displayAllItems()`: Displays all items and their respective frequencies.
     - `displayHistogram()`: Displays a histogram using asterisks to represent quantities.

2. **User Interface**:
   - The program offers a text-based menu with four options:
     1. Search for an item by name.
     2. Display the frequency of all items.
     3. Show a histogram of item quantities.
     4. Exit the program.

   - The menu operates in a loop, allowing users to perform multiple actions until they choose to exit. Error handling is included for invalid input.

### Functionality:
1. **Item Frequency Calculation**:
   - The program reads item data from a file named `CS210_Project_Three_Input_File.txt`. Each line is processed by removing extra whitespace, and the item frequency is updated in the `itemFrequency` map.

2. **Backup Data**:
   - After loading item data, the program creates a backup file (`frequency.dat`) that stores the frequency of each item for future use.

3. **Displaying Results**:
   - Users can view item frequencies or choose to display a histogram that visually represents item quantities with asterisks.

## Screenshots
Below are screenshots demonstrating the program’s functionality:
1. **Menu Display**  
   ![Menu Display](https://github.com/r00stuff/CS210/blob/main/menu.png)

2. **Displaying All Item Frequencies**  
   ![Displaying All Item Frequencies](https://github.com/r00stuff/CS210/blob/main/item_frequencies.png)

3. **Histogram Display**  
   ![Histogram Display](https://github.com/r00stuff/CS210/blob/main/histogram.png)

---

## Reflection

### Project Summary
This project aimed to solve the problem of tracking and analyzing the frequency of items purchased at a grocery store. By providing a user-friendly interface to search for items, display frequencies, and visualize data through histograms, the program helps manage inventory information more efficiently.

### What I Did Well
I particularly excelled at designing the program's class structure, ensuring that the functionality was well-organized and followed object-oriented principles. Additionally, I implemented effective file handling for both reading input data and writing backup data, which ensures the program can recover from disruptions.

### Areas for Improvement
While the program functions well, it could be improved by optimizing how data is loaded and processed. For instance, the program currently processes the entire file at once, but an enhancement could involve reading and processing data incrementally, making the program more memory efficient. Additionally, the backup system could benefit from encryption to ensure the data remains secure.

### Challenges Overcome
One of the more challenging aspects of the code was ensuring that item frequency calculations were accurate, particularly when handling varying formats of input data. To overcome this, I utilized a robust error-handling system and implemented data-cleaning steps to ensure that no irregularities in the input file would affect the results. I also consulted online forums and documentation to enhance my understanding of file I/O operations in C++.

### Transferable Skills
From this project, I’ve gained valuable experience in object-oriented programming, file handling, and data visualization, all of which are highly transferable to future software development projects. Additionally, the ability to organize complex data structures (e.g., using maps for tracking frequencies) is a skill I will carry forward to future coursework and professional projects.

### Code Maintainability and Adaptability
The program was designed to be maintainable by using clear class structures and adhering to coding standards. Variables and methods are named descriptively, and comments are provided where necessary. The program’s modularity also ensures that future enhancements, such as adding a graphical user interface (GUI) or expanding item tracking capabilities, can be implemented with minimal disruption to the existing codebase.

---
