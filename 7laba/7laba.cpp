#include<iostream>
#include <fstream>
#include<string>
#include <stdlib.h>

using namespace std;

void sum(string a) {

    float sum = 0, n;
    string b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != ' ') {
            b += a[i];
        }
        else {
            n = atof(b.c_str());
            sum += n;
            b = "";
        }
    }
    cout << sum + atof(b.c_str()) << endl;

}

int main()
{
    ifstream fin;
    string a, b;
    fin.open("test.txt");
    while (getline(fin, a)) {
        sum(a);
    }
    cout << "Enter numbers: " << endl;
    getline(cin, b);
    sum(b);
}