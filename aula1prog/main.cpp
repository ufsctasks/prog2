#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> ListOfWords;

    //realiza a leitura por meio de std::cin
    while(true)
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "UFxC String Store V.0" << endl;
        cout << "1. Insert string" << endl;
        //inserir uma palavra sem espaço e armazenar no vetor
        cout << "2. Print index and string" << endl;
        //imprimir index seguido da palavra
        cout << "3. Search string (literal)" << endl;
        //buscar por uma ou mais palavras na lista
        cout << "4. Search substrings" << endl;
        //buscar todas as substrings (ver material slide 17)
        cout << "5. Remove string (by index) //remover um index do vetor" << endl;
        cout << "6. Remove by substrings (all occurrences)" << endl;
        //opcional, remover todos os index com determinada substring
        cout << "0. Quit" << endl;
        cout << "-------------------------------------------------------" << endl;

        cout << "Enter an option: ";
        char opc;
        cin >> opc;

        if(opc == '1')
        {
            cout << "Enter a word: ";
            string str;
            cin >> str;
            ListOfWords.push_back(str);
            continue;
        }
        if(opc == '2')
        {
            for(size_t i = 0; i < ListOfWords.size(); i++)
            cout << ListOfWords.at(i) << endl;

            continue;
        }
        if(opc == '3')
        {
            
            continue;
        }
        if(opc == '4')
        {
            continue;
        }
        if(opc == '5')
        {
            continue;
        }
        if(opc == '6')
        {
            continue;
        }
        if(opc == '0')
        {
            break;
        }
    }

    return 0;
}