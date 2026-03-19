#include <iostream>

using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main() {
    int scores[20];
    int count = 0;
    int input;

    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n";

    // Store scores and keep track of how many are entered
    while (count < 20)
    {
        cin >> input;

        if (input == -1)
            break;

        if (input >= 0 && input <= 100)
        {
            scores[count] = input;
            count++;
        }
    }

    // Report perfect scores using the helper function
  // COMPLETE THE FUNCTION BELOW
  int perfectOnes = countPerfect(scores, count);
    
    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size) {
    int totalPerfect = 0;
    //COMPLETE THE CODE 
    for (int i = 0; i < size; i++)
    {
        if (scores[i] == 100)
        {
            totalPerfect++;
        }
    }
    return totalPerfect;
}
