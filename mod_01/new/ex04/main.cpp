#include <iostream>
#include <fstream> //input and output file

static int handle_file(std::string str1, std::string str2, std::string fName)
{
    std::string     buffer;
    std::ofstream   dest;
    ssize_t         pos;

    std::ifstream file_In(fName.c_str()); //READ FILE AS INPUT 
    fName = fName.substr(0, fName.find('.'));
    dest.open((fName + ".replace").c_str());
    if (file_In.fail())
        return 1;
    while (true)
    {
        std::getline(file_In, buffer);
        pos = buffer.find(str1);
        if (pos == -1)
            dest << buffer;
        else
         {
            std::cout << "FOUND: " << buffer.substr(0, pos) << std::endl;
            dest << buffer.substr(0, pos);
            dest << str2;
            buffer.erase(0, pos + str1.length());
         }
        std::cout << ssize_t(buffer.find(str1)) << std::endl;
        if (not file_In.good())
            break ;
        std::cout << "Buffer: " << buffer << std::endl;
    }
    std::cout << "Values :" << buffer << std::endl;
    return 0;
}

int main(int ac, char *av[])
{
    (void)ac;
    (void)av;
    std::string str1; 
    std::string str2; 
    std::string filename; 

    std::cout << "First str1: ";
    std::cin >> str1;
    std::cout << std::endl << "Sencond str2: ";
    std::cin >> str2;
    std::cout << std::endl << "filename: ";
    std::cin >> filename;

    if (not str1.length() or not str2.length() or not filename.length() or handle_file(str1, str2, filename))
        std::cerr << "Error: Wrong parameters" << std::endl;
        return 1;
    std::cout << str1;
    std::cout << str2;
    std::cout << filename;
    return 0;
}
