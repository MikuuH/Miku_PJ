












# ---------------------------------------------------------#
# Получите из него элемент с ключом 'x', удалив его из словаря.

# dct = {
# 	'x': 1,
# 	'y': 2,
# 	'z': 3
# }
# result = dct.pop('x')
# print(result)

# ---------------------------------------------------------#
# Скажите, что выведется в консоль.

# dct = {
# 	1: '1',
# 	2: '2',
# 	3: '3'
# }

# print(dct.pop('2')) # keyError

# ---------------------------------------------------------#
# Скажите, что выведется в консоль.



# dct = {
# 	'surn': 'smith',
# 	'name': 'john',
# 	'age': 30
# }

# dct.pop('surn')
# print(dct) # {'name': 'john', 'age': 30}

# ---------------------------------------------------------#
# Напишите код, чтобы получить следующий результат: [(1, 'ab'), (3, 'ef')]

# dct = {
# 	1: 'ab',
# 	2: 'cd',
# 	3: 'ef'
# }

# delete_keys = dct.pop(2)
# result = dct.items()

# print(delete_keys)
# print(result)
