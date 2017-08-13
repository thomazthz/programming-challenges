# -*- coding: utf-8 -*-

# https://www.urionlinejudge.com.br/judge/pt/problems/view/1239

import re

italic_re = re.compile(r'(_{1}(.*?)_{1})', re.DOTALL)
bold_re = re.compile(r'(\*{1}(.*?)\*{1})', re.DOTALL)

text = ''
try:
    while True:
        text = input()
        text = italic_re.sub(r'<i>\2</i>', text)
        text = bold_re.sub(r'<b>\2</b>', text)
        print(text)
except EOFError:
    pass
