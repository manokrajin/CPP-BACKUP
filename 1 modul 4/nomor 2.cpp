#include <iostream>

using namespace std;

int main()
{
    float b;
    float bmi,t;
    cout << "Berat Badan (KG) = ";
    cin >> b;
    cout << "Tinggi Badan (M) = ";
    cin >> t;

    bmi = b / (t*t);
    cout << "bmi:" << bmi << endl;
    if (bmi<=18.5){
        cout << "underweith";
    }
    else if (bmi>=18.6 && bmi<=24.9){
        cout << "Normal";
    }
    else if (bmi>=25 && bmi<=29.9){
        cout << "overweight";
    }
    else if (bmi >= 30){
        cout << "Obesity";
    }

    return 0;
}
