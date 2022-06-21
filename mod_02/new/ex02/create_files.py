import subprocess
from sys import argv

def main():
    for elem in argv:
        subprocess.Popen(["touch", elem.strip(',')])

if __name__ == "__main__":
    if len(argv) > 1:
        main()
