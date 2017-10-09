# -*- coding: utf-8 -*-

# Maratona de Programação da SBC – 2017
# https://www.urionlinejudge.com.br/judge/pt/problems/view/2663

n = int(input())
k = int(input())

competitors = []

for _ in range(0, n):
    competitors.append(int(input()))

sorted_competitors = sorted(competitors, reverse=True)

winners = sorted_competitors[:k]

winners_inc = 0

# check if has more competitors and if the next competitor have the same score
if len(sorted_competitors) > len(winners) and sorted_competitors[len(winners)] == winners[-1]:
    # index of the last competitor with the same score
    l_index = sorted_competitors[::-1].index(winners[-1])
    l_index = len(sorted_competitors) - l_index

    # how many competitors have the same score of the last competitor classified
    winners_inc = l_index - len(winners)

print(len(winners) + winners_inc)
