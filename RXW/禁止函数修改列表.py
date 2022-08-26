#禁止函数修改列表，13line用切片传入副本，不改变原列表
def print_models(unprinted_designs, completed_models):
    while unprinted_designs: 
        current_design = unprinted_designs.pop() 
        print("Printing model: " + current_design) 
        completed_models.append(current_design) 
def show_completed_models(completed_models):
    print("\nThe following models have been printed:") 
    for completed_model in completed_models: 
        print(completed_model) 
unprinted_designs = ['iphone case', 'robot pendant', 'dodecahedron'] 
completed_models = [] 
print_models(unprinted_designs[:], completed_models) 
show_completed_models(completed_models)
print(unprinted_designs)
