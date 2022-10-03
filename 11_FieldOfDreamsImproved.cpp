//поле чудес с улучшениями: проверяется, была ли введена буква ранее, можно пробовать угадаь слово полностью

#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int main()
{
    char word[100], wordSecret[10];               
    bool help1 = false, help2 = false;
    cout << "Enter word: ";
    cin >> word;
    
    for (int i = 0; i < strlen(word); i++) 
        wordSecret[i] = '-';
    char letter[100], letter1[100];
    int j = 0;

    cout << "Enter letter: ";
    cin >> letter;

    if (strlen(letter) != 1)
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

    letter1[j] = letter[0];
    j++;

    for (int i = 0; i < strlen(word); i++)    
        if (word[i] == letter[0])
        {
            wordSecret[i] = letter[0];                        
            help2 = true;                       
        }

    if (help2 == false)  
    {
        cout << "There is not this letter\n";
    }

    if (help2 == true)                      
    {
        for (int i = 0; i < strlen(word); i++)
        {
            cout << wordSecret[i];
        }
        cout << "\n";
    }

    for (int i = 0; i < strlen(word); i++)    
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


    while (help1 == false)                 
    {
        help2 = false;
        cout << "Enter letter: ";
        cin >> letter;

        if (strlen(letter) != 1)
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

        for (int k = 0; k < 100; k++)
        {
            if (letter1[k] == letter[0])
            {
                cout << "You have already used this letter. Try again\n";
                break;
            }
        }

        letter1[j] = letter[0];
        j++;

        for (int i = 0; i < strlen(word); i++)     
            if (word[i] == letter[0])
            {
                wordSecret[i] = letter[0];                         
                help2 = true;                       
            }
        
        if (help2 == false)  //сообщаем о том, что такой буквы нет (если её нет)
        {
            cout << "There is not this letter\n";
        }
                

        if (help2 == true)                   
        {
            for (int i = 0; i < strlen(word); i++)
            {
                cout << wordSecret[i];
            }
            cout << "\n";
        }


        for (int i = 0; i < strlen(word); i++)    
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
