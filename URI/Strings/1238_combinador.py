# -*- coding: utf-8 -*-

# https://www.urionlinejudge.com.br/judge/pt/problems/view/1238

from itertools import chain, zip_longest

n = int(input())

for _ in range(n):
    s = input().split()
    print(''.join(list(filter(lambda x: x, chain.from_iterable(zip_longest(s[0], s[1]))))))
