//поле чудес с улучшениями: проверяется, была ли введена буква ранее, можно пробовать угадаь слово полностью

#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int main()
{
    char word[100], wordSecret[10];            //массивы для исходного слова и массив для того, чтобы угадать введённое слово   
    bool help1 = false, help2 = false;         // первая переменная показывает, угадали ли слово, вторая - угадана ли буква
    char letter[100], letter1[100];            //массив для введённых букв (или введённого полностью слова) и вспомогательный массив для проверки, была ли введена данная буква раньше
    
    cout << "Enter word: ";
    cin >> word;
    
    for (int i = 0; i < strlen(word); i++)    //заполняем второй массив символами "-" в количестве, равном буквам в введённом слове
        wordSecret[i] = '-';

    cout << "Enter letter: ";
    cin >> letter;

    if (strlen(letter) != 1)                  //если введено больше одной буквы, начинается прверка введённого слова с исходным
    {
        for (int i = 0; i < strlen(letter); i++)    
        {                                   
            if (letter[i] != word[i])
            {
                cout << "Fail\n";
                return 0;
            }
        }
        cout << "You are amazing!\n";
        return 0;
    }
    
    int j = 0;
    letter1[j] = letter[0];
    j++;

    for (int i = 0; i < strlen(word); i++)    //проверяем, угадали ли букву, и если да, то заменяем "-" на эту букву
        if (word[i] == letter[0])
        {
            wordSecret[i] = letter[0];                        
            help2 = true;                       
        }

    if (help2 == false)                     //если не угадали букву
    {
        cout << "There is not this letter\n";
    }

    if (help2 == true)                      //если угадали букву, выводится второй массив с заменённым "-" на букву
    {
        for (int i = 0; i < strlen(word); i++)
        {
            cout << wordSecret[i];
        }
        cout << "\n";
    }

    for (int i = 0; i < strlen(word); i++)    //проверяем, угадано ли слово
    {                                   
        if (wordSecret[i] == '-')
        {
            help1 = false;
            break;
        }
        else
            help1 = true;
    }

    if (help1 == true)
    {
        cout << "You are amazing!\n";
        return 0;
    }


    while (help1 == false)                 //пока слово не угадано
    {
        help2 = false;
        cout << "Enter letter: ";
        cin >> letter;

        if (strlen(letter) != 1)           // если введено больше одной буквы, проверяем, совпадает ли введённое слово с исходным
        {
            for (int i = 0; i < strlen(letter); i++)  
            {                                  
                if (letter[i] != word[i])
                {
                    cout << "Fail\n";
                    return 0;
                }
            }
            cout << "You are amazing!\n";
            return 0;
        }

        for (int k = 0; k < 100; k++)      //проверяем, была ли введена данная буква раньше
        {
            if (letter1[k] == letter[0])
            {
                cout << "You have already used this letter. Try again\n";
                break;
            }
        }

        letter1[j] = letter[0];
        j++;

        for (int i = 0; i < strlen(word); i++)     //проверяем, угадали ли букву, и если да, то заменяем "-" на эту букву
            if (word[i] == letter[0])
            {
                wordSecret[i] = letter[0];                         
                help2 = true;                       
            }
        
        if (help2 == false)                  //сообщаем о том, что такой буквы нет (если её нет)
        {
            cout << "There is not this letter\n";
        }
                

        if (help2 == true)                   //если угадали букву, выводится второй массив с заменённым "-" на букву
        {
            for (int i = 0; i < strlen(word); i++)
            {
                cout << wordSecret[i];
            }
            cout << "\n";
        }


        for (int i = 0; i < strlen(word); i++)    //проверем, угадано ли слово
        {                               
            if (wordSecret[i] == '-')
            {
                help1 = false;
                break;
            }
            else
                help1 = true;
        }
    }
    cout << "You are amazing!\n";

    return 0;
}
