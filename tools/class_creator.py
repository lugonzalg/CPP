import subprocess

def create_member_func(name, fd):
    back = input("return type: ")
    params = '('
    while param_type := input("parameter type: "):
        if params != "(":
            params += ', '
        params += param_type + " " 
    params += ')'
    function = "\t" + back + '\t' + name + params + ';' + '\n'
    response = input("well spelled? " + function + ':')
    if response == "yes":
        print("WRITE")
        fd.write('\t' + function)

def create_attr(name, fd):
    var_type = input("variable type: ")
    variable = '\t' * 2 + var_type + '\t' + name + ';' + '\n'
    print("VARIABLE: " + variable)
    response = input("well spelled? " + variable + ':')
    if response == "yes":
        print("WRITE")
        fd.write(variable)

def fixed_member_func(name, param_type, fd):
    if not param_type:
        param_type = ""
    tructor = '\t' * 4 + name + '(' + param_type + ')' + ';' + '\n'
    print("CONS/DES-TRUCTOR: " + tructor)
    fd.write(tructor)
        
def create_primordial_class(class_name):
    subprocess.Popen(["touch", class_name + ".hpp"])
    subprocess.Popen(["touch", class_name + ".cpp"])
    with open(class_name + ".hpp", 'a') as fd:
        head = class_name.upper() + "_HPP"
        fd.write("#ifndef " + head + '\n')
        fd.write("#define " + head + "\n\n")
        fd.write("class " + class_name + '\n')
        fd.write("{" + '\n')
        fd.write("\t" + "private:" + '\n')
        while func := input("private member function: "):
            create_member_func(func, fd)
        while var := input("private variable: "):
            create_attr(var, fd)
        fd.write("\n\t" + "public:" + '\n')
        while func := input("public member function: "):
            create_member_func(func, fd)
        fd.write('\n')
        fixed_member_func(class_name, None, fd)
        fixed_member_func(class_name, class_name + '&', fd)
        fixed_member_func('~' + class_name, None, fd)
        fd.write("\n};" + '\n')
        fd.write("#endif ")

def main():
    class_name = input("Class name: ")
    create_primordial_class(class_name)

if __name__ == "__main__":
    main()
