# 8
# 4 R
# 1 P
# 8 P
# 3 R
# 7 C
# 5 S
# 6 L
# 2 L

# 2
# 6 5 1

import sys
import math

RULES = {
    'C': 'PL',
    'P': 'RS',
    'R': 'LC',
    'L': 'SP',
    'S': 'CR',
}


def grouper(iterable, n):
    "Collect data into fixed-length chunks or blocks"
    # grouper('ABCDEFG', 3, 'x') --> ABC DEF Gxx"
    args = [iter(iterable)] * n
    return zip(*args)


def compute_winner_loser(pa, pb):
    if pb[1] in RULES.get(pa[1]):
        winner = pa
        loser = pb
    elif pa[1] in RULES.get(pb[1]):
        winner = pb
        loser = pa
    elif pa[0] < pb[0]:
        winner = pa
        loser = pb
    else:
        winner = pb
        loser = pa

    return winner, loser


n = int(input())
plays = []
for i in range(n):
    numplayer, signplayer = input().split()
    numplayer = int(numplayer)
    plays.append((numplayer, signplayer))

next_round = plays
wins = {}
round_count = 0
while len(next_round) != 1:
    round_count += 1
    current_round = next_round
    next_round = []
    print(f'Round {round_count}', file=sys.stderr)
    for pa, pb in grouper(current_round, 2):
        winner, loser = compute_winner_loser(pa, pb)
        print(f'player {pb} beat {pa}', file=sys.stderr)
        next_round.append(winner)

        if winner[0] not in wins:
            wins[winner[0]] = []
        wins[winner[0]].append(str(loser[0]))

print(winner[0])
print(' '.join(wins[winner[0]]))
