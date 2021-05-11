try:
    while True:
        n = int(input())
        for i in range(n):
            row = ['3'] * n
            row[i] = '1'
            row[-i - 1] = '2'
            print(''.join(row))
except (EOFError, TypeError):
    pass
