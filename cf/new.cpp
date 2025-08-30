#include <bits/stdc++.h>
using namespace std;

/* Utility functions. Don't modify these */
string trim(string str) {
    if (str.empty()) return str;
    size_t firstScan = str.find_first_not_of(' ');
    size_t first = firstScan == string::npos ? str.length() : firstScan;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}

/* Core logic */
int Glitched_Milo(int N, vector<string> T) {
    int count = 0;
    
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {  // Changed from i+1 to i
            // Count character frequencies in combined string
            map<char, int> combined_count;
            
            for (char c : T[i]) {
                combined_count[c]++;
            }
            for (char c : T[j]) {
                combined_count[c]++;
            }
            
            // Check conditions
            int total_length = T[i].length() + T[j].length();
            int num_different_chars = combined_count.size();
            
            // Count characters that appear odd times
            int odd_char_count = 0;
            for (auto& pair : combined_count) {
                if (pair.second % 2 == 1) {
                    odd_char_count++;
                }
            }
            
            // Check all glitch conditions
            if (total_length % 2 == 1 && 
                num_different_chars == 25 && 
                odd_char_count == 25) {
                count++;
            }
        }
    }
    
    return count;
}

/* Main function */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string inputline;
    getline(cin, inputline);
    int N = stoi(trim(inputline));

    vector<string> T(N);
    for (int j = 0; j < N; j++) {
        getline(cin, inputline);
        T[j] = inputline;
    }

    int result = Glitched_Milo(N, T);
    cout << result << "\n";

    return 0;
}
