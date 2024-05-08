#include <iostream>
#include <vector>
using namespace std;

/*

1. Вводится последовательность целых чисел. Требуется вывести все подотрезки, состоящие из последовательности неубывающих чисел, и их количество.
Из статей яндекса на тему подготовки к собеседованиям.

*/

int main() {
    vector <int> massiv;
    int temp = 0;
    while (cin >> temp) {
        massiv.push_back(temp);
    }
    vector <string> podotrezki;
    string stroka = "";
    stroka += to_string(massiv[0]) + " ";
    for (int i = 1; i < massiv.size(); i++) {
        if (massiv[i] >= massiv[i-1])
            stroka += to_string(massiv[i]) + " ";
        else if (massiv[i] < massiv[i-1]){
            podotrezki.push_back(stroka);
            stroka = to_string(massiv[i]) + " ";
        } 

        if (i == massiv.size()-1)
            podotrezki.push_back(stroka);
    }

    cout << endl;
    for (string x : podotrezki) {
        cout << x << endl;
    }

    cout << "The amount: " << podotrezki.size() << endl;
}