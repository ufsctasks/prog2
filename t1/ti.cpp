#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


/*string buscasubstring(fstream File, string busca)
{
    //contar todas ocorrencias de espaço no texto.
    int acum=0;
    for(int i=0; i<File.size(); i++)
    {
        if(File.at(i) == ' ') acum++;
    }
    cout << "A quantidade de espacos eh -> " << acum << endl;

    //procurando se no texto existe determinada palavra (substring)
    size_t posicao = File.find(busca);
    cout << "Busca por: " << busca << endl;
    if(posicao < File.size())
        cout << "Encontrei na posicao " << posicao << endl;
    else
        cout << "Palavra procurada nao encontrada" << endl;
    
    return busca;
}*/

string openFile()
{
    string filename;
    string filenotfound = "filenotfound";
    cout << "Enter a file to open: "; 
    cin >> filename;
    ifstream File(filename);
    
    if(File.is_open() == true){
    cout << "file has been found" << endl;
    return filename;
    }
    else{
    cout << "file has been not found" << endl;
    return filenotfound;
    }
}

/*void removeWordBySubstrings(vector<vector<string>> &FilesAndWords)
{   
    string wordToFind;
    cout << "Enter a word to find" << endl;
    size_t position = FilesAndWords.find(wordToFind);
    if(position < FilesAndWords.size())
    cout << "word has been found!" << end;
    else
    cout << "word has been NOT found!" << end;
}*/

int main()
{
    vector < vector<string> > FilesAndWords;

    while (true)
    {

    cout << "-------------------------------------------------" << endl;
    cout << "FILE MANIPULATOR HACK" << endl;
    cout << "Select an option:" << endl;
    cout << "1. Load a File. Enter filename..." << endl;
    cout << "2. Remove Words Containing a Substring" << endl;
    cout << "3. Remove all Repeated Words (keep the first one only)" << endl;
    cout << "4. Show Statistics" << endl;
    cout << "5. Exit" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Option:" << endl;
    
    char opc;
    string filefound;
    int count = 0;

    cin >> opc;

        switch (opc)
        {
        case '1':
            filefound = openFile();
            if(filefound != "filenotfound"){
            FilesAndWords.push_back(filefound);
            count++;
            }
        break;
        
        case '2':
            //removeWordBySubstrings();
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        }
    }
    


    return 0;
}