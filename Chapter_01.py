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
# d = OrderedDict()
# d['a'] = 1
# d['b'] = 2
# d['c'] = 3
# d['d'] = 4
# print(d) # 顺序按照添加的顺序
# import json
# e = json.dumps(d)
# print(type(e))
