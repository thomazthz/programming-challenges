# -*- coding: utf-8 -*-

# https://www.urionlinejudge.com.br/judge/pt/problems/view/1169

from math import floor

n = int(input())

for _ in range(0, n):
    casas = int(input())
    graos = sum([pow(2, n) for n in range(0, casas)])
    print('{} kg'.format(floor(graos/12/1000)))
