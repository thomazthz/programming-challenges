# 1172 - Substituição em Vetor I
# https://www.urionlinejudge.com.br/judge/pt/problems/view/1172

for i in range(10):
    n = int(input())
    print(f'X[{i}] = {n <= 0 and 1 or n}')
