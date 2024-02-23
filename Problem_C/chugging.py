def chug_time(N: int, t: int, d: int) -> int:
    # Sum all numbers from 1 to N-1
    near_sum2N = (N - 1) * (N - 1 + 1) // 2
    return N * t + d * near_sum2N


if __name__ == "__main__":
    # Read in numbers
    N = int(input())

    # Read in multiple numbers on the same line
    t_A, d_A = map(int, input().split())
    t_B, d_B = map(int, input().split())

    alice_time = chug_time(N, t_A, d_A)
    bob_time = chug_time(N, t_B, d_B)

    if alice_time < bob_time:
        print("Alice")
    elif alice_time > bob_time:
        print("Bob")
    else:
        print("=")
