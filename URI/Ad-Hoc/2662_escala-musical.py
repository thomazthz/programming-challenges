# -*- coding: utf-8 -*-

# Maratona de Programção da SBC, ACM ICPC 2017
# https://www.urionlinejudge.com.br/judge/pt/problems/view/2662


def verifica_escala(i):
    escala = {(x+i) % 12 for x in indices}
    # print([notas[n] for n in notas_tocadas])
    # print([notas[n] for n in escala])
    return notas_tocadas.issubset(escala)

notas = [
    'do', #1
    'do#',#2
    're', #3
    're#',#4
    'mi', #5
    'fa', #6
    'fa#',#7
    'sol',#8
    'sol#',#9
    'la', #10
    'la#',#11
    'si', #12
]

notas_tocadas = set()

indices = [0, 2, 4, 5, 7, 9, 11, 12]  # [0, 2, 2, 1, 2, 2, 2, 1]


n = int(input())

for _ in range(0, n):
    nota = int(input())
    notas_tocadas.add((nota-1) % 12)

desafinado = True
for i in range(1, len(notas) + 1):
    if verifica_escala(i-1):
        print(notas[(i - 1) % 12])
        desafinado = False
        break

if desafinado:
    print('desafinado')
