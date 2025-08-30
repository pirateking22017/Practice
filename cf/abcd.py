import sys

def calc(N, A):
    total = 0

    # Odd-length palindromes
    for center in range(N):
        l = r = center
        mismatch = 0
        while l >= 0 and r < N:
            if A[l] != A[r]:
                mismatch += 1
            total += mismatch
            l -= 1
            r += 1

    # Even-length palindromes
    for center in range(N - 1):
        l = center
        r = center + 1
        mismatch = 0
        while l >= 0 and r < N:
            if A[l] != A[r]:
                mismatch += 1
            total += mismatch
            l -= 1
            r += 1

    return total

def main():
    N = int(sys.stdin.readline())
    A = [int(sys.stdin.readline()) for _ in range(N)]
    print(calc(N, A))

if __name__ == "__main__":
    main()
