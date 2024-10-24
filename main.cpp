#include "ItemToPurchase.h"
#include <iostream>

void displayMenu() {
    std::cout << "\n===============================" << std::endl;
    std::cout << "  Corner Grocer: Item-Tracking" << std::endl;
    std::cout << "===============================\n" << std::endl;
    std::cout << "1. Search for an item" << std::endl;
    std::cout << "2. Display all item frequencies" << std::endl;
    std::cout << "3. Display histogram" << std::endl;
    std::cout << "4. Exit\n" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    GroceryTracker tracker;
    tracker.loadDataFromFile("CS210_Project_Three_Input_File.txt");  // Load item data from the file
    tracker.writeBackupToFile("frequency.dat");                      // Create backup file

    int choice;
    std::string item;

    while (true) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: // Search for an item
                std::cout << "Enter the item name: ";
                std::cin >> item;
                std::cout << item << " appears " << tracker.getItemFrequency(item) << " times." << std::endl;
                break;
            
            case 2: // Display all item frequencies
                tracker.displayAllItems();
                break;

            case 3: // Display histogram
                tracker.displayHistogram();
                break;

            case 4: // Exit
                std::cout << "Exiting program." << std::endl;
                return 0;

            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }
    }
    return 0;
}
