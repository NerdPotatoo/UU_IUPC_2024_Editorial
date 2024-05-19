#Code by zahid147

MOD = 10**6 + 3

def powmod(a, b, p):
    a %= p
    if a == 0:
        return 0
    product = 1
    while b > 0:
        if b & 1:
            product *= a
            product %= p
            b -= 1
        a *= a
        a %= p
        b >>= 1
    return product

def inv(a, p):
    return powmod(a, p - 2, p)

def nCk(n, k, p):
    fact = [1] * (n + 1)
    for i in range(1, n + 1):
        fact[i] = (fact[i - 1] * i) % p
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n - k], p)) % p

for _ in range(int(input())):
    a, b = map(int, input().split())
    ans = nCk(a, b, MOD)
    print(f"Case {_+1}: {ans}")