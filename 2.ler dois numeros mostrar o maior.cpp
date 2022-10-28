#include <iostream>

using namespace std;

int main()
{
    int num1,num2;

    cout  << "numero 1: " << endl;
    cin >> num1;
    cout << "numero 2: " <<endl;
    cin >> num2;

    if (num1 > num2){
        cout <<"o maior numero - "<<  num1;
    }
    if (num1 < num2){
        cout << "o maior numero - " <<  num2;
    }

    return 0;
}
