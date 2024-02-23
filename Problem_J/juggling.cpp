#include <iostream>
#include <vector>

int main() {
    // Read in integer as string
    std::string N;
    std::cin >> N;

    // Number of characters in string
    int n = N.size();
    int sequence_length = n + 10;

    // Initialize all elements of vector to 0
    std::vector<int> vec(sequence_length, 0);

    // go through each character in the string and convert to integer
    bool no_clash = true;
    int i = 0;
    while (i < sequence_length && no_clash) {
        int digit = N[i] - '0';
        if (vec[i + digit] == 1) {
            no_clash = false;
        } else {
            vec[digit] = 1;
        }
        i++;
    }

    if (no_clash) {
        std::cout << "VALID" << std::endl;

    } else {
        std::cout << "INVALID" << std::endl;

    }

}