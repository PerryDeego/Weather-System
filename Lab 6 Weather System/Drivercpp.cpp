/* Author: D. Perry */

#include "Coordinates.h"
#include "Node.h"
#include "List.h"

#include <iostream>
using namespace std;

/*  Function to insert coordinates at the front of the list */
void insertAtFront(List* coordinatesList) {
    float x, y;
    while (true) {
        cout << "~~~~~~~~~~~~~~~ INSERT AT FRONT ~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Enter X coordinate or [-1] to Quit: ";
        cin >> x;

        // Exit condition
        if (x == -1) break;

        cout << "Enter Y coordinate: ";
        cin >> y;

        Coordinates location(x, y);
        coordinatesList->insertAtFront(location);
        cout << endl;
    }
}

/* Function to insert coordinates at the end of the list */
void insertAtEnd(List* coordinatesList) {
    float x, y;
    while (true) {
        cout << "~~~~~~~~~~~~~~~ INSERT AT END ~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Enter X coordinate or [-1] to Quit: ";
        cin >> x;

        // Exit condition
        if (x == -1) break;

        cout << "Enter Y coordinate: ";
        cin >> y;

        Coordinates location(x, y);
        coordinatesList->insertAtEnd(location);
        cout << endl;
    }
}

/* Function to search for a coordinate in the list */
void searchCoordinates(List* coordinatesList) {
    float x, y;
    cout << "Enter X coordinate to search for in list: ";
    cin >> x;
    cout << "Enter Y coordinate to search for in list: ";
    cin >> y;

    cout << endl;
    coordinatesList->findNode(x, y);
}

int main() {
    List* coordinatesList = new List();

    // Insert coordinates at the front
    insertAtFront(coordinatesList);
    
    // Display all coordinates
    cout << "Start" << endl;
    coordinatesList->traverse();
    cout << "End" << endl;

    // Display the count of existing coordinates
    cout << "Number of existing coordinates: " << coordinatesList->countNodes() << endl;

    // Insert coordinates at the end
    insertAtEnd(coordinatesList);

    // Search for coordinates
    searchCoordinates(coordinatesList);

    // Cleanup
    delete coordinatesList; // Assuming List has a destructor to free resources
    return 0;
}