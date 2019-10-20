#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ifstream file;

    file.open("main.cpp");

    char output[100];

    if (file.is_open()) {
        while (!file.eof())
        {
            file.getline(output, 100);
            cout << output << endl;
        }
        
    }

    file.close();

    return 0;
}