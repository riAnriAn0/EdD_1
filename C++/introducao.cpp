#include <iostream>
#include <string>

#define nome cout << "nome"
#define pi 3.1416

using namespace std;

int main()
{

    int num = 0;
    nome;

    cout << "Saida de dados"; // print
    // cin >> num;                // input
    cout << num << "\n";

    cout << pi << "\n";

    if (5 > 2 and 3 > 2)
    {
        cout << "sim";
    }

    string result = "";
    (num > 10) ? result = "sim" : result = "não";
    cout << result;

    return 0;
}
