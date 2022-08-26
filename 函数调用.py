#位置实参
# def pet(pet_1, pet_2):
#     print(pet_1 + pet_2)
# a = input()
# b = input()
# pet(a, b)

#关键字实参
# def pet(pet_1, pet_2):
#     print(pet_1 + pet_2)
# a = input()
# b = input()
# pet(pet_1 = b, pet_2 = a)

#给形参默认值
# def pet_love(pet_name, animal_type = "dog"):
#     print(pet_name + " is a " + animal_type)
# a = input("请输入宠物名字")
# b = input("请输入宠物品种")
# pet_love(pet_name = a)

#函数返回值
def get_formatted_name(first_name, last_name):
    full_name = first_name + " " + last_name
    return full_name.title()
musician = get_formatted_name("jimi", "hendrix")
print(musician)

#让实参变得可选
def get_formatted_name(first_name, last_name, middle_name= ""):
    if middle_name:
        full_name = first_name + " " + middle_name + " " + last_name
    else:
        full_name = first_name + " " + last_name
    return full_name.title()

musician = get_formatted_name("jake", "qiongsi","he")
print(musician)
print("\n")

#返回字典
def build_person(first_name, last_name, age = ""):
    person = {"first": first_name, "last": last_name}
    if age:
        person["age"] = age
    return person
musician = build_person("jimi", "hendrix", )
print(musician)
















