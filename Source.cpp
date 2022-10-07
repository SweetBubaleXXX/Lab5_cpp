#include <iostream>

using namespace std;

void enterNumber(int&);

double* sumLine(double[], int);

int main() {
    int lineAmount, columnAmount;
    int niceElems = 0;

    cout << "Enter number of lines:" << endl;
    enterNumber(lineAmount);
    cout << "Enter number of columns" << endl;
    enterNumber(columnAmount);

    double** lines = new double* [lineAmount];

    cout << "Enter elements (lines):" << endl;
    for (int i = 0; i < lineAmount; i++) {
        lines[i] = new double[columnAmount];
        for (int k = 0; k < columnAmount; k++) {
            scanf_s("%le", &lines[i][k]);
        }
    }

    for (int i = 0; i < lineAmount; i++) {
        for (int k = 0; k < columnAmount; k++) {
            double* lineSum = sumLine(lines[i], columnAmount);
            niceElems += int(lines[i][k] < *lineSum - lines[i][k]);
            delete lineSum;
        }
    }

    cout << "Total - " << niceElems << endl;

    for (int i = 0; i < lineAmount; i++) delete[] lines[i];

    return 0;
}

void enterNumber(int& number) {
    cout << ">>> ";
    cin >> number;
}

double* sumLine(double line[], int size) {
    int column;
    double* sum = (double*)malloc(sizeof(double));
    if (sum) {
        for (column = 0, *sum = 0; column < size; *sum += line[column], column++);
    }
    return sum;
}
