#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Node {
    string vertex;
    int time;
    Node* next;
};

class AdjacencyMatrixList {
    int adjacencyMatrix[10][10];
    int numOfCities;
    string cities[20];
    Node* head[20];
    Node* temp;

public:
    AdjacencyMatrixList() {
        for (int i = 0; i < 20; i++) {
            head[i] = NULL;
        }
    }

    void getGraph();
    void createAdjacencyList();
    void displayMatrix();
    void displayList();
};

void AdjacencyMatrixList::getGraph() {
    cout << "\nEnter the number of cities (max. 20): ";
    cin >> numOfCities;

    cout << "\nEnter the names of cities: ";
    for (int i = 0; i < numOfCities; i++) {
        cin >> cities[i];
    }

    for (int i = 0; i < numOfCities; i++) {
        for (int j = 0; j < numOfCities; j++) {
            cout << "\nIs there a path between city " << cities[i] << " and " << cities[j] << "? (y/n): ";
            char ch;
            cin >> ch;

            if (ch == 'y') {
                cout << "\nEnter the time required to reach city " << cities[j] << " from " << cities[i] << " in minutes: ";
                cin >> adjacencyMatrix[i][j];
            } else if (ch == 'n') {
                adjacencyMatrix[i][j] = 0;
            } else {
                cout << "\nUnknown entry";
            }
        }
    }

    createAdjacencyList();
}

void AdjacencyMatrixList::createAdjacencyList() {
    cout << "\n****";
    for (int i = 0; i < numOfCities; i++) {
        Node* newNode = new Node;
        newNode->next = NULL;
        newNode->vertex = cities[i];
        head[i] = newNode;
        cout << "\n" << head[i]->vertex;
    }

    for (int i = 0; i < numOfCities; i++) {
        for (int j = 0; j < numOfCities; j++) {
            if (adjacencyMatrix[i][j] != 0) {
                Node* newNode = new Node;
                newNode->vertex = cities[j];
                newNode->time = adjacencyMatrix[i][j];
                newNode->next = NULL;

                if (head[i]->next == NULL) {
                    head[i]->next = newNode;
                } else {
                    temp = head[i];
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
            }
        }
    }
}

void AdjacencyMatrixList::displayMatrix() {
    cout << "\n";
    for (int j = 0; j < numOfCities; j++) {
        cout << "\t" << cities[j];
    }

    for (int i = 0; i < numOfCities; i++) {
        cout << "\n" << cities[i];
        for (int j = 0; j < numOfCities; j++) {
            cout << "\t" << adjacencyMatrix[i][j];
        }
        cout << "\n";
    }
}

void AdjacencyMatrixList::displayList() {
    cout << "\nAdjacency list is: ";
    for (int i = 0; i < numOfCities; i++) {
        if (head[i] == NULL) {
            cout << "\nAdjacency list not present";
            break;
        } else {
            cout << "\n" << head[i]->vertex;
            temp = head[i]->next;
            while (temp != NULL) {
                cout << "-> " << temp->vertex;
                temp = temp->next;
            }
        }
    }

    cout << "\nPath and time required to reach cities is: ";
    for (int i = 0; i < numOfCities; i++) {
        if (head[i] == NULL) {
            cout << "\nAdjacency list not present";
            break;
        } else {
            temp = head[i]->next;
            while (temp != NULL) {
                cout << "\n" << head[i]->vertex;
                cout << "-> " << temp->vertex << "\n [Time required: " << temp->time << " min ]";
                temp = temp->next;
            }
        }
    }
}

int main() {
    int choice;
    AdjacencyMatrixList graph;

    while (true) {
        cout << "\n\nEnter your choice:"
             << "\n1. Enter graph"
             << "\n2. Display adjacency matrix for cities"
             << "\n3. Display adjacency list for cities"
             << "\n4. Exit"
             << "\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                graph.getGraph();
                break;
            case 2:
                graph.displayMatrix();
                break;
            case 3:
                graph.displayList();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nUnknown choice";
        }
    }

    return 0;
}
