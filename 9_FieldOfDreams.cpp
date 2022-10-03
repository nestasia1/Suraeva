#include <iostream>


using namespace std;

int main()
{
    char word[100], wordSecret[10];                   
    bool help1 = false, help2 = false;
    cout << "Enter word: ";
    cin >> word;

    for (int i = 0; i < strlen(word); i++)
        wordSecret[i] = '-';
    char letter;                            

    while (help1 == false)               
    {
        help2 = false;
        cout << "Enter letter: ";
        cin >> letter;
        for (int i = 0; i < strlen(word); i++)     
            if (word[i] == letter)
            {
                wordSecret[i] = letter;                        
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
    }
    cout << "You are amazing!";

    return 0;
}
