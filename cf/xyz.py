import sys
def calc(N, X):
    MOD = 998244353
    
    # The constraint is |pos - dancer| >= X
    # This means dancer and position must differ by at least X
    
    # Use DP: dp[mask] = number of ways to fill positions indicated by mask
    dp = [0] * (1 << N)
    dp[0] = 1
    
    # Process positions in order
    for pos in range(1, N + 1):
        new_dp = [0] * (1 << N)
        for mask in range(1 << N):
            if dp[mask] == 0:
                continue
            
            # Try placing each dancer at this position
            for dancer in range(1, N + 1):
                # Check if dancer is already placed
                if mask & (1 << (dancer - 1)):
                    continue
                
                # Check if |pos - dancer| >= X
                if abs(pos - dancer) >= X:
                    new_mask = mask | (1 << (dancer - 1))
                    new_dp[new_mask] = (new_dp[new_mask] + dp[mask]) % MOD
        
        dp = new_dp
    
    return dp[(1 << N) - 1]

def main():
    N = int(sys.stdin.readline().strip())
    X = int(sys.stdin.readline().strip())
    result = calc(N, X)
    print(result)

if __name__ == "__main__":
    main()
