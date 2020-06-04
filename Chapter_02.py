# 01 针对任意多的分隔符拆分字符串
# line = 'asdf fjdk; afed, fjek,asdf,     foo'
# import re

# 1. [;,\s]代表匹配;、,或空格、制表符、换页符等空白字符中的一个
# 2. \s*代表匹配空格、制表符、换页符等空白字符零个或多个

# a = re.split(r'[;,\s]\s*', line)
# print(a)
# b = re.split(r'(;|,|\s)\s*', line)
# print(b)
# c = b[::2]
# d = b[1::2] + ['']
# print(c)
# print(d)
# e = ''.join(v+d for v, d in zip(c, d))
# print(e)
# f = re.split(r'(?:,|;|\s)\s*', line)
# print(f)

# 02 在字符串的开头或结尾做文本匹配
# filename = 'spam.txt'
# end = filename.endswith('.txt')
# start = filename.startswith('file:')
# print(start, end)

# 03 利用Shell通配符做字符串匹配
# from fnmatch import fnmatch(不分大小写), fnmatchcase(区分大小写)
#
# print(fnmatch('foo.txt', '*.txt'))
# print(fnmatch('Dat45.csv', 'Dat[0-9]*'))
# names = ['Dat1.csv', 'Dat2.csv', 'config.ini', 'foo.py']
# print([name for name in names if fnmatch(name, 'Dat*.csv')])  # fnmatch()的匹配模式与操作系统相关

# 04 文本模式的匹配和查找
# 简单字符串的匹配使用str.find() | str.endswith() | str.startswith()
# 复杂使用正则
# + 表示表达式至少出现一次
# text1 = '11/27/2012'
# text2 = 'Nov 27, 2012'
# import re
#
# if re.match(r'\d+/\d+/\d+', text1):
#     print('Y')
# else:
#     print('N')
# 如果针对统一模式匹配多次，可以将正则表达式模式预编译成一个模式对象
# datepat = re.compile(r'\d+/\d+/\d+')
# if datepat.match(text1):
#     print('Y')
# match是在字符串开头找到匹配项，针对整个文本搜索匹配项使用findall
# print(datepat.findall(text1))
# 使用括号包起来的方式引入捕获组
# datepat_ = re.compile(r'(\d+)/(\d+)/(\d+)')
# m = datepat_.match('11/27/2012')
# print(m)
# print(m.group())
# print(m.group(0))
# print(m.group(1))
# print(m.group(2))
# mouth, day, year = m.groups()
# print(mouth, day, year)
# 使用迭代的方式找出匹配项
# text = 'Today is 11/27/2012. PyCon starts 3/13/2013.'
# for i in datepat_.finditer(text):
#     print(i.groups())
# 精确匹配，确保在模式中包含一个结束标记($) # datepat = re.compile(r'(\d+)/(\d+)/(\d+)$')

# 05 查找和替换文本
# 简单文本使用 str.replace()
# 复杂模式使用re sub(匹配的模式, 替换的模式, 对象)
# 重复匹配相同模式可以先将模式编译好
# text = 'Today is 11/27/2012. PyCon starts 3/13/2013.'
# import re
#
# datepat = re.compile(r'(\d+)/(\d+)/(\d+)')
# print(datepat.sub(r'\3-\1-\2', text))
# 更加复杂的情况可以定义替换回调函数
# from calendar import month_abbr
#
#
# def change_date(m):
#     mon_name = month_abbr[int(m.group(1))]
#     return '{} {} {}'.format(m.group(2), mon_name, m.group(3))
#
#
# print(datepat.sub(change_date, text))
# 使用subn()了解替换的次数
# newtext, n = datepat.subn(r'\3-\1-\2', text)

# 06 不区分大小写的方式对文本做替换和查找
# re.findall('python', text, flags=re.IGNORECASE)
# re.sub('python', 'snake', text, flags=re.IGNORECASE)

# 07 定义实现最短匹配的正则表达式
# 小数点.表示匹配除了换行符以外的任意字符
# 在修饰匹配次数的图书符号后加上?，表示尽可能少的匹配

# 08 编写多行模式的正则表达式
# 由于(.)不能匹配换行符，所以需要添加对换行符的支持
# re.compile(r'/\*((?:.|\n)*?)\*/')
# re.compile(r'/\*(.*?)\*/', re.DOTALL) re.DOTALL使得正则表达式中的句点可以匹配所有字符 但是在复杂情况下最好使用自己定义的正则
# r''表示原字符串

# 09 将Unicode文本统一表示为规范形式 unicodedata 'NFC表示字符应该是全组成的' | 'NFD表示应该使用组合字符 每个字符都是可以完全分解开的'
# Python还支持NFKC和NFKD的规范表示形式
# s1 = 'Spicy Jalape\u00f1o'
# s2 = 'Spicy Jalapen\u0303o'
# print(s1, s2)
# import unicodedata
# t1 = unicodedata.normalize('NFC', s1)
# t2 = unicodedata.normalize('NFC', s2)
# print(t1, t2)
# print(ascii(t1), ascii(t2))
# t3 = unicodedata.normalize('NFD', s1)
# t4 = unicodedata.normalize('NFD', s2)

# 10 用正则表达式处理Unicode字符
# regex

# 11 从字符串中去掉不需要的字符
# strip() lstrip() rstrip()

# 12 文本过滤和清理
# translate

# 13 对齐文本字符串
# ljust() rjust() center()
# text = 'Hello World'
# print(text.ljust(20))
# print(text.rjust(20))
# print(text.center(20))
# print(text.center(20, '*'))
# format()
# print(format(text, '>20'))
# print(format(text, '<20'))
# print(format(text, '^20'))
# print(format(text, '=>20s'))
# print(format(text, '*^20s'))
# print('{:>10s} {:>10s}'.format('Hello', 'World'))

# 14 字符串连接及合并
# join()
# parts = ['Is', 'Chicago', 'Not', 'Chicago?']
# print(' '.join(parts))
# format()
# a = 'Is Chicago'
# b = 'Not Chicago?'
# print('{} {}'.format(a, b))

# 15 字符串中的变量名做插值处理
# format
# s = '{name} has {n} messages.'
# a = s.format(name='zz', n=37)
# print(a)

# 16 以固定的列数重新格式化文本
# textwrap
# s = "Look into my eyes, look into my eyes, the eyes, the eyes, \
#     the eyes, not around the eyes, don't look around the eyes, \
#     look into my eyes, you're under."
# import textwrap
#
# print(textwrap.fill(s, 70))
# print(textwrap.fill(s, 40, initial_indent=' '))
# print(textwrap.fill(s, 40, subsequent_indent=' '))
# 获取终端尺寸
# import os
# size = os.get_terminal_size().columns
# print(size)

# 17 在文本中处理HTML和XML实体
# 对HTML替换XML实体一些特定字符做转义处理
# s = 'Elements are written as "<tag>text</tag>".'
# import html
# print(s)
# print(html.escape(s))
# print(html.escape(s, quote=False))
# z = 'Spicy Jalapen~o'
# zz = z.encode('ascii', errors='xmlcharrefreplace')
# print(zz)
# 使用HTML解析器或XML解析器自带的功能函数和方法完成实体替换
# s = 'Spicy "Jalapeño&quot.'
# from html.parser import HTMLParser
# p = HTMLParser()
# pp = p.unescape(s)
# print(pp)

# 19 编写简单的递归下降解析器
# ###
