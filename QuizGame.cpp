#include <bits/stdc++.h>
using namespace std;

class quiz {
public:
    string q, a, b, c, d;
    char correct;

    void question(string q, string a, string b, string c, string d, char cor) {
        this->q = q;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->correct = cor;

        cout << q << endl;
        cout << "A) " << a << endl;
        cout << "B) " << b << endl;
        cout << "C) " << c << endl;
        cout << "D) " << d << endl;
    }
};

int main() {
    int sc = 0;
    char ans;

    quiz q1, q2;

    q1.question("Capital of France?", "Paris", "London", "Rome", "Berlin", 'A');
    cin >> ans;
    if (toupper(ans) == q1.correct) {
        cout << "Correct\n";
        sc++;
    } else {
        cout << "Wrong\n";
    }

    q2.question("2 + 2 = ?", "3", "4", "5", "6", 'B');
    cin >> ans;
    if (toupper(ans) == q2.correct) {
        cout << "Correct\n";
        sc++;
    } else {
        cout << "Wrong\n";
    }

    cout << "Score: " << sc << endl;
    return 0;
}
