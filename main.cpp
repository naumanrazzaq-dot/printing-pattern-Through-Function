#include <iostream>
using namespace std;

void squarepat(int n) {
    for(int i = 0; i < n; i++) {       // Rows ke liye
        for(int j = 0; j < n; j++) {   // Columns ke liye
            cout << " *";              // Side-by-side stars
        }
        cout << endl;                  // <--- YE ZAROORI HAI: Har row ke baad line badalne k liye
    }
}

int main() {
    squarepat(4);                      // <--- Sirf call karein, cout na karein
    return 0;
}
