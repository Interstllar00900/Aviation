#include<iostream>
using namespace std;

class candid {
public:
    int vote = 0;
    string name;
};

int main() {
    int n;
    cout << "How many candidates will contest?\n";
    cin >> n;
    
    candid can[n]; // Creating an array of candidates
    
    // Input candidate names
    for (int i = 0; i < n; i++) {
        cout << "Enter name for candidate " << i + 1 << ": ";
        cin >> can[i].name; // Using cin to read candidate names
    }
    
    int voter;
    cout << "Enter the number of voters: ";
    cin >> voter; // Input for number of voters
    
    string x;
    for (int i = 0; i < voter; i++) {
        cout << "Voter " << i + 1 << " will vote. Enter candidate name: ";
        cin >> x;
        
        // Searching for the candidate and incrementing vote count
        for (int j = 0; j < n; j++) {
            if (x == can[j].name) {
                can[j].vote++;
                break; // Found the candidate, so break out of the loop
            }
        }
    }
    
    // Outputting results
    cout << "Results:\n";
    for (int i = 0; i < n; i++) {
        cout << can[i].name << " got " << can[i].vote << " votes.\n";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

class candid {
public:
    int vote = 0;
    string name;
};

int main() {
    int n;
    cout << "How many candidates will contest?\n";
    cin >> n;
    
    candid can[n]; // Creating an array of candidates
    
    // Input candidate names
    for (int i = 0; i < n; i++) {
        cout << "Enter name for candidate " << i + 1 << ": ";
        cin >> can[i].name; // Using cin to read candidate names
    }
    
    int voter;
    cout << "Enter the number of voters: ";
    cin >> voter; // Input for number of voters
    
    string x;
    for (int i = 0; i < voter; i++) {
        cout << "Voter " << i + 1 << " will vote. Enter candidate name: ";
        cin >> x;
        
        // Searching for the candidate and incrementing vote count
        for (int j = 0; j < n; j++) {
            if (x == can[j].name) {
                can[j].vote++;
                break; // Found the candidate, so break out of the loop
            }
        }
    }
    
    // Outputting results
    cout << "Results:\n";
    for (int i = 0; i < n; i++) {
        cout << can[i].name << " got " << can[i].vote << " votes.\n";
    }
    
    return 0;
}
