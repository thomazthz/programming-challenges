# Dama
# https://www.urionlinejudge.com.br/judge/pt/problems/view/1087

x1, y1, x2, y2 = map(int, input().split())
while (x1, y1, x2, y2) != (0, 0, 0, 0):
    if (x1, y1) == (x2, y2):
        print(0)
    elif (x1 == x2 or y1 == y2) or (abs(x1 - x2) == abs(y1 - y2)):
        print(1)
    else:
        print(2)
    x1, y1, x2, y2 = map(int, input().split())
