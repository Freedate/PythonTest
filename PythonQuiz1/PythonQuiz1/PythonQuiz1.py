#201111305 이동호

import re
p = re.compile('[a-zA-Z]+?[0-9]+?[!-*]+?')
p2 = re.compile('.{8,13}')
str = 'ascc0#s!'
m = re.match(p,str)
print(m)