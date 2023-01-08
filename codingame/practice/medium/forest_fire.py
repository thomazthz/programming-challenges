import sys
from collections import namedtuple

Unit = namedtuple('Unit', ['name', 'area', 'water_use', 'water_cost_per_unit'])

Canadair = Unit('C', [[True] * 3] * 3, 2100, 2100 / 9)
Helicopter = Unit('H', [[True] * 2] * 2, 1200, 1200 / 4)
Jumpers = Unit('J', [[True]], 600, 600)

units = (Canadair, Helicopter, Jumpers)

l = int(input())  # Size of forest map
water_total = int(input())  # Total amount of water_total available
forest = [[False] * l for _ in range(l)]
n = int(input())  # Amount of fires


def get_best_unit(forest, row, col):
    for i, unit in enumerate(units):
        if unit.water_use > water_total:
            print('pulando')
            continue

        fires_extinguished = 0
        coordinates = []
        try:
            for a, rows in enumerate(unit.area):
                for b, _ in enumerate(rows):
                    r = row + a
                    c = col + b
                    if forest[r][c]:
                        fires_extinguished += 1
                        coordinates.append((r, c))
        except IndexError:
            pass

        wasted_water = unit.water_use - (
            unit.water_cost_per_unit * fires_extinguished)

        if i + 1 >= len(units) or wasted_water <= units[i +
                                                        1].water_cost_per_unit:
            return unit, fires_extinguished, coordinates


def put_out_fire(forest, row, col):
    unit, fires_extinguished, coordinates = get_best_unit(forest, row, col)
    for row, col in coordinates:
        forest[row][col] = False

    return unit


print(f'size={l} water_total={water_total} fires={n}', file=sys.stderr)

for i in range(n):
    fire_x, fire_y = [int(j) for j in input().split()]
    print(f'{fire_x} {fire_y}', file=sys.stderr)
    forest[fire_y][fire_x] = True

# print("\n".join(map(str, forest)), file=sys.stderr)

for row, rows in enumerate(forest):
    for col, is_on_fire in enumerate(rows):
        if is_on_fire:
            unit = put_out_fire(forest, row, col)
            water_total -= unit.water_use
            print(f'{unit.name} {col} {row}')
