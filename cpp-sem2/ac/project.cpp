#include <bits/stdc++.h>
using namespace std;

//Hukesh chandra(25BCS11045)

struct Student {
    string name;
    int marks[5];
    int total = 0;
};

// Partition function
int partition(vector<Student>& s, int low, int high) {
    int pivot = s[high].total;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (s[j].total > pivot) { 
            i++;
            swap(s[i], s[j]);
        }
    }
    swap(s[i + 1], s[high]);
    return i + 1;
}

// Quick Sort
void quickSort(vector<Student>& s, int low, int high) {
    if (low < high) {
        int pi = partition(s, low, high);
        quickSort(s, low, pi - 1);
        quickSort(s, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> s(n);

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " name: ";
        cin >> s[i].name;

        cout << "Enter marks (5 subjects): ";
        for (int j = 0; j < 5; j++) {
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }
    }

    quickSort(s, 0, n - 1);

    // Display
    cout << "\n======== RANK LIST ========\n";
    cout << left << setw(6) << "Rank"
         << setw(15) << "Name"
         << setw(8) << "Total" << "\n";

    cout << "-----------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << setw(6) << i + 1
             << setw(15) << s[i].name
             << setw(8) << s[i].total << "\n";
    }

    return 0;
}