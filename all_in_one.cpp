#include <iostream>

using namespace std;

class all_in_one {
protected:
    int factorial(int n) {
        int fact = 1, i;
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
};

class b : public all_in_one {
private:
    int sum_of_digits() {
        int num = 14, sum = 0, rem;
        do {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        } while (num > 0);
        int c = factorial(5);
        cout << "Factorial = " << c;
        return sum;
    }

public:
    int num;

    b(int n) {
        num = n;
        for (num = 5; num >= 1; num--) {
            for (int i = 10; i >= 1; i--) {
                cout << num * i << endl;
            }
            cout << endl;
        }
    }

    void show() {
        int c = sum_of_digits();
        cout << "\nSum of digits = " << c;
    }
};

int main() {
    b obj(1);
    obj.show();

    return 0;
}


    