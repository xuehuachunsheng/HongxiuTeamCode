def countdown():
    i = 5
    while i > 0:
        yield i #定义一个生成器，替换return 在不破坏局部变量的情况下向调用方提供结果，使用生成器可以提高性能
        i -= 1

for i in countdown():
    print(i)