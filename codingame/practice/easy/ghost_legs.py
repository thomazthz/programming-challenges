import math

w, h = [int(i) for i in input().split()]

top_labels = input().split('  ')

lanes = [label for label in top_labels]

for _ in range(h - 2):
    row = input()
    start_index = 1
    while start_index < w - 1:
        try:
            connector_index = row.index('-', start_index)
            left_index = math.floor(connector_index / 3)
            right_index = math.ceil(connector_index / 3)

            # import pdb
            # pdb.set_trace()
            lanes[left_index], lanes[right_index] = lanes[right_index], lanes[
                left_index]

            start_index = connector_index + 3
        except ValueError:
            break

bottom_labels = input().split('  ')

for label in top_labels:
    print(f'{label}{bottom_labels[lanes.index(label)]}')
