# 01 将序列分解为单独的变量
# demo = [1, 2, 3, 4, 5]
# a, b, c, d, e = demo
# print(a, b, c, d, e)

# 02 从任意长度的可迭代对象中分解元素
# demo1 = [1, 2, 3, 4, 5, 6]
# a, *b = demo1
# demo2 = (1, 2, 3, 4, 5, 6)
# c, *d = demo2
# demo3 = {'a': 'test', 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6}
# e, *f = demo3 # 字典拆分后 e是str f是list
# print(b)
# print(d)
# print(type(f))

# 03 保存最后N个元素
# from collections import deque -> deque(maxlen=N)创建了一个固定长度的队列 可以在两端执行添加和弹出操作
# deque对比列表，队列两端添加或弹出元素的复杂度都是O(1)，在列表头部插入或移除元素时，复杂度都是O(N)
# from collections import deque
# q = deque()
# q.append(1)
# q.append(2)
# q.append(3)
# q.appendleft(4)
# q.pop()
# q.popleft()

# 04 找到最大或最小的N个元素
# heapq nlargest() nsmallest()
# import heapq
# nums = [1, 8, 2, 23, 7, -4, 18, 23, 42, 37, 2]
# print(heapq.nlargest(3, nums))
# 这两个函数可以接受参数 工作在复杂的结构上
# portfolio = [
#    {'name': 'IBM', 'shares': 100, 'price': 91.1},
#    {'name': 'AAPL', 'shares': 50, 'price': 543.22},
#    {'name': 'FB', 'shares': 200, 'price': 21.09},
#    {'name': 'HPQ', 'shares': 35, 'price': 31.75},
#    {'name': 'YHOO', 'shares': 45, 'price': 16.35},
#    {'name': 'ACME', 'shares': 75, 'price': 115.65}
# ]
# cheap = heapq.nsmallest(3, portfolio, key=lambda s: s['price'])
# print(cheap)
# heapify()结构转换成堆 堆的特性是第一个元素时最小的那个

# # 05 优先级队列 利用heapify()的堆特性
# import heapq
#
#
# class PriorityQueue:
#     def __init__(self):
#         self._queue = []
#         self._index = 0
#
#     def push(self, item, priority):
#         heapq.heappush(self._queue, (-priority, self._index, item))
#         self._index += 1
#
#     def pop(self):
#         return heapq.heappop(self._queue)[-1]

# # 06 字典将键映射到多个值上
# d = {
#     'a': [1, 2, 3],
#     'b': [4, 5]
# }
# print(d['a'])
# from collections import defaultdict
# d = defaultdict(list)
# print(d)
# d['a'].append(1)
# print(d)

# 07 让字典有序
# from collections import OrderedDict
# d = OrderedDict() # OederedDict内部是一个双向链表 可以根据元素加入的顺序排列键的位置，但是大小是普通字典的两倍多 就是空间换时间
# d['a'] = 1
# d['b'] = 2
# d['c'] = 3
# d['d'] = 4
# print(d) # 顺序按照添加的顺序
# import json
# e = json.dumps(d)
# print(type(e))

# 08 与字典有关的计算问题 为了对字典内容做些有用的计算，通常利用zip()将字典的键和值反转
# prices = {
#     'ACME': 45.23,
#     'AAPL': 612.78,
#     'IBM': 205.55,
#     'HPQ': 37.20,
#     'FB': 10.75
# }
# print(min(zip(prices.values())))
# print(min(zip(prices.values(), prices.keys()))) # zip创建迭代器，只能被消费一次
# print(sorted(zip(prices.values(), prices.keys())))

# 09 两个字典的相同点
# a = {
#     'x': 1,
#     'y': 2,
#     'z': 3
# }
#
# b = {
#     'w': 10,
#     'x': 11,
#     'y': 2
# }
# print(a.keys() & b.keys())
# print(a.keys() - b.keys())
# print(a.items() & b.items())
# print(a.items())
# print(a.values())

# 10 序列中移除重复项且保持元素间顺序不变
# 可哈希
# def dedupe(items):
#     seen = set()
#     for item in items:
#         if item not in seen:
#             yield item
#             seen.add(item)
#
#
# a = [1, 5, 2, 1, 9, 1, 5, 10]
# print(list(dedupe(a)))


# 不可哈希
# def dedupe(items, key=None):
#     seen = set()
#     for item in items:
#         val = item if key is None else key(item)
#         if val not in seen:
#             yield item
#             seen.add(val)
#
#
# a = [{'x': 1, 'y': 2}, {'x': 1, 'y': 3}, {'x': 1, 'y': 2}, {'x': 2, 'y': 4}]
# b = list(dedupe(a, key=lambda
#
# d: d['x']))
# [{'x': 1, 'y': 2}, {'x': 2, 'y': 4}]
# print(b)

# 11 对切片命名
# items = [0, 1, 2, 3, 4, 5, 6]
# a = slice(2, 4)
# print(items[a])
# print(a.start)
# print(a.stop)
# print(a.step)

# 12 序列中出现次数最多的元素 Counter对象可以结合数学运算操作使用
# words = [
#    'look', 'into', 'my', 'eyes', 'look', 'into', 'my', 'eyes',
#    'the', 'eyes', 'the', 'eyes', 'the', 'eyes', 'not', 'around', 'the',
#    'eyes', "don't", 'look', 'around', 'the', 'eyes', 'look', 'into',
#    'my', 'eyes', "you're", 'under'
# ]
#
# from collections import Counter
# word_counts = Counter(words)
# top_three = word_counts.most_common(3)
# print(top_three)

# 13 通过公共键对字典列表排序
# rows = [
#     {'fname': 'Brian', 'lname': 'Jones', 'uid': 1003},
#     {'fname': 'David', 'lname': 'Beazley', 'uid': 1002},
#     {'fname': 'John', 'lname': 'Cleese', 'uid': 1001},
#     {'fname': 'Big', 'lname': 'Jones', 'uid': 1004}
# ]
# from operator import itemgetter
# rows_by_fname = sorted(rows, key=itemgetter('fname'))
# rows_by_uid = sorted(rows, key=itemgetter('uid'))
# rows_by_lfname = sorted(rows, key=itemgetter('lname', 'fname')) # 支持多键
# print(rows_by_fname)
# print(rows_by_uid)
# print(rows_by_lfname)

# 14 对不原生支持比较操作的对象排序
# 内建的sorted()函数接收一个传递可调用对象的参数key 可调用对象会返回待排序对象中的某些值，sorted利用这些值比较对象
# lambda or attrgetter()

# 15 根据记录将字段分组
# rows = [
#     {'address': '5412 N CLARK', 'date': '07/01/2012'},
#     {'address': '5148 N CLARK', 'date': '07/04/2012'},
#     {'address': '5800 E 58TH', 'date': '07/02/2012'},
#     {'address': '2122 N CLARK', 'date': '07/03/2012'},
#     {'address': '5645 N RAVENSWOOD', 'date': '07/02/2012'},
#     {'address': '1060 W ADDISON', 'date': '07/02/2012'},
#     {'address': '4801 N BROADWAY', 'date': '07/01/2012'},
#     {'address': '1039 W GRANVILLE', 'date': '07/04/2012'},
# ]
#
# from operator import itemgetter
# from itertools import groupby
# rows.sort(key=itemgetter('date'))
# for date, items in groupby(rows, key=itemgetter('date')):
#     print(date)
#     for i in items:
#         print(' ', i)

# 16 筛选序列中的元素
# 列表推导式
# mylist = [1, 4, -5, 10, -7, 2, 3, -1]
# a = [n for n in mylist if n > 0]
# print(a)

# 17 字典中提取子集
# 字典推导式

# 18 名称映射到序列的元素中
# collections.namedtuple()

# 19 同时对数据转换和换算
# 换算：reduction

# 20 多个映射合并为单个映射
# collection ChainMap
