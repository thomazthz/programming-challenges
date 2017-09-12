# -*- coding: utf-8 -*-

# https://www.urionlinejudge.com.br/judge/pt/problems/view/1161


def fatorial(n):
    fat = 1
    for i in range(2, n + 1):
        fat *= i
    return fat

try:
    while True:
        m, n = [int(x) for x in input().split()]
        m_fat, n_fat = fatorial(m), fatorial(n)
        print(m_fat + n_fat)
except EOFError:
    pass