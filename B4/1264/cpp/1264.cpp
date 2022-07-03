#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int i;
    while (1) {
        int count = 0;
        getline(cin, input);
        if (input == "#")
            break;
        for (i = 0; i < input.size(); i++) {
            if (input[i] == 'a') count++;
            if (input[i] == 'A') count++;
            if (input[i] == 'e') count++;
            if (input[i] == 'E') count++;
            if (input[i] == 'i') count++;
            if (input[i] == 'I') count++;
            if (input[i] == 'o') count++;
            if (input[i] == 'O') count++;
            if (input[i] == 'u') count++;
            if (input[i] == 'U') count++;
        }
        cout << count << endl;
    }
    return 0;
}