#循环输入字典
responses = {}
flug = True
while flug:
    name = input("\nplease input your name:")
    response = input("Which mountain would you like to climb?")
    responses[name] = response
    flug = input("是否重复？")
    if flug == "否":
        flug = False
print("\n结果")#验证
for name,response in responses.items():
    print(name + "想要去攀登" + response + ".")















































































