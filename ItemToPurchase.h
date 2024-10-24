#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;  // To store item and its frequency

public:
    // Function to read the file and count item frequencies
    void loadDataFromFile(const std::string& fileName);

    // Function to write the frequency data to backup file (frequency.dat)
    void writeBackupToFile(const std::string& backupFileName);

    // Function to search for an item and return its frequency
    int getItemFrequency(const std::string& item) const;

    // Function to display all items with their frequencies
    void displayAllItems() const;

    // Function to display histogram of items
    void displayHistogram() const;
};

#endif
