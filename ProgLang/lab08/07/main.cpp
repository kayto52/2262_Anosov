#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<int> a;
    int x;
    while (ss >> x) {
        a.push_back(x);
    }

    bool found = false;
    for (int v : a) {
        if (v < 0) {
            cout << v << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Все числа неотрицательные" << endl;
    }
    return 0;
}
