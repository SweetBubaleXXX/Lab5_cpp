#include <iostream>

using namespace std;

void enterNumber(int&);

double sumLine(double[], int);

int main() {
    int lineAmount, columnAmount;

    cout << "Enter number of lines:" << endl;
    enterNumber(lineAmount);
    cout << "Enter number of columns" << endl;
    enterNumber(columnAmount);

    double** lines = new double*[lineAmount];

    for (int i = 0; i < lineAmount; i++) {
        lines[i] = new double[columnAmount];
        for (int k = 0; k < columnAmount; k++) {
            scanf_s("%le", &lines[i][k]);
        }
    }

    return 0;
}

void enterNumber(int& number) {
    cout << ">>> ";
    cin >> number;
}

double sumLine(double line[], int size) {
    double sum;
    for (int column = 0, sum = 0; column < size; column++) {
        
    }
    return sum;
}
