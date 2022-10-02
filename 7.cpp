#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 100;
    char result;
    cout << "Задумайте число от 1 до 100, а я угадаю!\n";
    do
    {
        n = (a + b) / 2;
        cout << "Если ваше число меньше " << n << " нажмите 1, если больше - нажмите 2, если равно - нажмите 3\n";
        cin >> result;
        if (result == '2') a = n;
        if (result == '1') b = n;
        if (result == '3')
        {
            cout << "Ваше число " << n << "\n";
            break;
        }
    } while (n / 2 > 0);
}
