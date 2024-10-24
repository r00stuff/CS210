#include "ItemToPurchase.h"

// Function to read the file and count item frequencies
void GroceryTracker::loadDataFromFile(const std::string& fileName) {
    std::ifstream inputFile(fileName);
    std::string item;

    if (inputFile.is_open()) {
        while (getline(inputFile, item)) {
            // Trim any leading/trailing whitespace characters (if needed)
            item.erase(0, item.find_first_not_of(" \n\r\t\f\v")); // Left trim
            item.erase(item.find_last_not_of(" \n\r\t\f\v") + 1); // Right trim

            // Increment the frequency of each item
            if (!item.empty()) {  // Ensure the item is not an empty line
                itemFrequency[item]++;
            }
        }
        inputFile.close();
    } else {
        std::cout << "Error: Unable to open file " << fileName << std::endl;
    }
}

// Function to write the frequency data to backup file (frequency.dat)
void GroceryTracker::writeBackupToFile(const std::string& backupFileName) {
    std::ofstream backupFile(backupFileName);
    if (backupFile.is_open()) {
        for (const auto& pair : itemFrequency) {
            backupFile << pair.first << " " << pair.second << std::endl;
        }
        backupFile.close();
    } else {
        std::cout << "Error: Unable to create backup file." << std::endl;
    }
}

// Function to search for an item and return its frequency
int GroceryTracker::getItemFrequency(const std::string& item) const {
    auto it = itemFrequency.find(item);
    if (it != itemFrequency.end()) {
        return it->second;
    }
    return 0;  // Item not found
}

// Function to display all items with their frequencies
void GroceryTracker::displayAllItems() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Function to display histogram of items
void GroceryTracker::displayHistogram() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
