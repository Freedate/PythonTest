#201111305 이동호

import re
p = re.compile('[a-zA-Z]+?[0-9]+?[!-*]+{8-13}')
str = 'ascc22d4#a'
m = re.match(p,str)
print(m)