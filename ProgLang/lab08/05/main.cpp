#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }

    int last = a.back();
    for (int &x : a) {
        x += last;
    }

    int positive = 0;
    int negative = 0;
    for (int x : a) {
        if (x > 0) {
            positive++;
        } else if (x < 0) {
            negative++;
        }
    }

    cout << positive << " " << negative << endl;
    return 0;
}
