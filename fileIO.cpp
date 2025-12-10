#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.csv");
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    int totalPrinted = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string temp;
        int num1 = 0, num2 = 0;
        string word;

      
        getline(ss, temp, ',');
        stringstream(temp) >> num1;

        
        getline(ss, temp, ',');
        stringstream(temp) >> num2;

       
        getline(ss, word, ',');

        int sum = num1 + num2;

        
        for (int i = 0; i < sum; i++) {
            cout << word << " ";
            totalPrinted++;   
        }
        cout << endl;
    }

    file.close();

   
    cout << "\n--- Extra Credit ---" << endl;
    cout << "Total words printed: " << totalPrinted << endl;

    return 0;
}

