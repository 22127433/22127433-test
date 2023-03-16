#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    file.open("a.txt", ios::in | ios::out);
    char line[100];
    string tmp;
    getline(file, tmp);
    file.getline(line, 100);
    int pos = strlen(line);
    fgets(line, 100, stdin);
    line[strlen(line)-1] = '\0';
    file.seekp(-pos-2, ios::cur);
    file.write(line, pos);
    file.close();
    return 0;
}