import sys
import operator

OPERATORS_MAP = {
    'VALUE': lambda x, y: x,
    'ADD': operator.add,
    'SUB': operator.sub,
    'MULT': operator.mul
}


class Spreadsheet:
    def __init__(self):
        self.data = []

    def write_cell(self, operation, arg1, arg2):
        raw_value = (operation, arg1, arg2)

        self.data.append(Cell(self, raw_value))

    def print(self):
        for cell in self.data:
            print(cell.value)

    def print_raw(self):
        for cell in self.data:
            print(cell.raw_value, file=sys.stderr)

    def __getitem__(self, key):
        return self.data[key]


class Cell:
    def __init__(self, spreadsheet, raw_value):
        self.spreadsheet = spreadsheet
        self.raw_value = raw_value
        self._value = None

    @property
    def value(self):
        if self._value is None and self.raw_value is not None:
            self._value = self.evaluate()

        return self._value

    def evaluate(self):
        operator_name, arg1, arg2 = self.raw_value
        parsed_arg1 = self._parse_arg(arg1)
        parsed_arg2 = self._parse_arg(arg2)

        operator = OPERATORS_MAP.get(operator_name)

        print(
            f'Evaluating {operator_name} {parsed_arg1} {parsed_arg2}',
            file=sys.stderr)

        return operator(parsed_arg1, parsed_arg2)

    def _parse_arg(self, arg):
        if arg.startswith('$'):
            ref_index = int(arg.lstrip('$'))
            cell = self.spreadsheet[ref_index]
            arg = cell.value

        # try:
        #     arg = int(arg)
        # except ValueError:
        #     pass

        return int(arg) or arg


n = int(input())
spreadsheet = Spreadsheet()

for _ in range(n):
    operator, arg1, arg2 = input().split()
    spreadsheet.write_cell(operator, arg1, arg2)

spreadsheet.print_raw()
spreadsheet.print()
