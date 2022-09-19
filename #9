#include <iostream>


using namespace std;

int main()
{
    char word[100], wordSecret[10];                   //два масива, первый для оригинала слова,второй для его шифра
    bool help1 = false, help2 = false; //две переменные для контроля не расшифровали ли слово и угадали ли букву
    cout << "Enter word: ";
    cin >> word;

    for (int i = 0; i < strlen(word); i++) //заполняем массив тем же количеством "-", что и количество букв в первом 
        wordSecret[i] = '-';
    char letter;                             //переменная для бувкы

    while (help1 == false)                  //пока слово не разгадали
    {
        help2 = false;
        cout << "Enter letter: ";
        cin >> letter;
        for (int i = 0; i < strlen(word); i++)     //проверяем есть ли заданая буква в слове
            if (word[i] == letter)
            {
                wordSecret[i] = letter;                           //ели да, то в шифрованом массиве заменяем "-" на букву
                help2 = true;                        //заносим в переменную информацию о том, что мы угадали букву
            }
        
        if (help2 == false)  //сообщаем о том, что такой буквы нет (если её нет)
        {
            cout << "There is not this letter\n";
        }
                

        if (help2 == true)                       //если угадали букву, выводим слово
        {
            for (int i = 0; i < strlen(word); i++)
            {
                cout << wordSecret[i];
            }
            cout << "\n";
        }


        for (int i = 0; i < strlen(word); i++)     //проверяем, не угадали ли еще слово
        {                                   //Слово считаем угаданым если в массиве не осталось "-"
            if (wordSecret[i] == '-')
            {
                help1 = false;
                break;
            }
            else
                help1 = true;
        }
    }
    cout << "You are amazing!";

    return 0;
}
