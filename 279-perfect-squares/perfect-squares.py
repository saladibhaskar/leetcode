class Solution:
    def numSquares(self, n: int) -> int:
        def isPerfectSquare(x):
            sqrt_x = int(math.sqrt(x))
            return sqrt_x * sqrt_x == x

        # Check if n is a perfect square itself
        if isPerfectSquare(n):
            return 1

        # Check if n satisfies Legendre's Three-Square Theorem
        while n % 4 == 0:
            n //= 4
        if n % 8 == 7:
            return 4

        # Check for two-square solution
        for i in range(1, int(math.sqrt(n)) + 1):
            if isPerfectSquare(n - i * i):
                return 2

        # If none of the above conditions apply, return 3
        return 3