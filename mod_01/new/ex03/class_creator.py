import subprocess

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
            fd.write('\t'*2 + input("return: "))
            fd.write('\t' + func)
            fd.write('(')
            i = 0
            while param := input("func parameter: "):
                if i:
                    fd.write(", ")
                fd.write(input("parameter type: "))
                fd.write(" " + param)
                i += 1
            fd.write(")\n")
        while var := input("private variable: "):
            fd.write('\t'*2 + input("type: "))
            fd.write('\t' + var + '\n')
        fd.write("\n\t" + "public:" + '\n')
        while func := input("public member function: "):
            fd.write('\t'*2 + input("return: "))
            fd.write('\t' + func)
            fd.write('(')
            i = 0
            while param := input("func parameter: "):
                if i:
                    fd.write(", ")
                fd.write(input("parameter type: "))
                fd.write(" " + param)
                i += 1
            fd.write(")\n")
        print("CREATING DEFUALT CONSTRUCTOR")
        fd.write("\t"*3 + class_name + "();")
        while constructor := input("constructor: "):
            fd.write("\t"*3 + class_name)
            i = 0
            while param := input("constructor param: "):
                if i:
                    fd.write(", ")
                fd.write(input("parameter type: "))
                fd.write(" " + param)
                i += 1
        print("CREATING DEFUALT DESTRUCTOR")
        fd.write("\n" + "\t"*3 + '~' + class_name + "();")
        while destructor := input("destructor: "):
            fd.write("\n" + ("\t"*3) + '~' + class_name)
            i = 0
            while param := input("destructor param: "):
                if i:
                    fd.write(", ")
                fd.write(input("parameter type: "))
                fd.write(" " + param)
                i += 1
        fd.write("\n};" + '\n')
        fd.write("#endif ")

def main():
    class_name = input("Class name: ")
    create_primordial_class(class_name)

if __name__ == "__main__":
    main()
