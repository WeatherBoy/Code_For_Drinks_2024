#include <iostream>

// Calculate the time it takes to chug a drink
int chugTime(int N, int t, int d) {
    // summing all the numbers from 1 to N-1
    int near_sum2N = (N-1) * (N-1 + 1) / 2;
    return t * N + d * near_sum2N; 
}

int main() {
    int N, t_A, d_A, t_B, d_B;
    
    // Read the three lines
    std::cin >> N;
    std::cin >> t_A >> d_A;
    std::cin >> t_B >> d_B;

    int alice_time = chugTime(N, t_A, d_A);
    int bob_time = chugTime(N, t_B, d_B);

    if (bob_time < alice_time) {
        std::cout << "Bob" << std::endl;
    } else if (alice_time < bob_time) {
        std::cout << "Alice" << std::endl;
    } else {
        std::cout << "=" << std::endl;
    }

}