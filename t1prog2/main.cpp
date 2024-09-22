#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

bool open_file(string filename, vector<string> &liststrings); //
size_t remove_substring(vector<pair<string, vector<string> > > &ListOfFiles, string search, size_t option);


int main()
{
    size_t option = 0;
    vector<string> liststrings;                       
    pair<string, vector<string> > file;                
    vector<pair<string, vector<string> > > ListOfFiles; 

    do
    {
                cout << "-------------------------------------------------" << endl
                << "FILE MANIPULATOR HACK" << endl
                << "1. Load a File" << endl
                << "2. Remove Words Containing a Substring" << endl
                << "3. Remove all Repeated Words (keep the first one only)" << endl
                << "4. Show Statistics" << endl
                << "5.  Exit" << endl
                << "-------------------------------------------------" << endl
                << "Option:";
            cin >> option;
        if (option == 1)
        {
            string filename;
            cout << "Enter a file to open: " << endl;
            cin >> filename;

            if (open_file(filename, liststrings))
            {

                file.first = filename;
                file.second = liststrings;

                ListOfFiles.push_back(file);
                liststrings.clear();
            }

            continue;
        }
        if (option == 2)
        {
            cout << "Enter a Substring to remove: " << endl;

            string remove;
            cin >> remove;

            remove_substring(ListOfFiles, remove, option);
            continue;
        }
        if (option == 3)
        {

            if (ListOfFiles.empty())
            {
                cout << "File Manipulator is empty" << endl;
            }
            else
            {
                for (size_t i = 0; i < ListOfFiles.size(); i++)
                {
                    for (size_t j = 0; j < ListOfFiles.at(i).second.size(); j++) 
                    {
                        for (size_t k = 0; k < ListOfFiles.size(); k++)
                        {
                            for (size_t l = 0; l < ListOfFiles.at(k).second.size(); l++)
                            {
                                if (k == i && j == l)
                                {
                                }
                                else if (ListOfFiles.at(k).second.at(l) == ListOfFiles.at(i).second.at(j))
                                {
                                    cout << "Removed:" << ListOfFiles.at(k).first << " --- " << ListOfFiles.at(k).second.at(l) << " " <<  ListOfFiles.at(i).first << " --- " << ListOfFiles.at(i).second.at(j) << endl;
                                    ListOfFiles.at(k).second.at(l).erase();
                                }
                            }
                        }
                    }
                }
            }
            continue;
        }
        if (option == 4)
        {
            cout << "File Manipulator Hack Statistics:" << endl;
        if (ListOfFiles.empty())
            {
                cout << "File Manipulator is empty" << endl;
            }
            else
            {
                for (size_t i = 0; i < ListOfFiles.size(); i++)
                {
                    size_t sp = 0;
                    for (size_t j = 0; j < ListOfFiles.at(i).second.size(); j++)
                    {

                        if (ListOfFiles.at(i).second.at(j).length() == 0)
                        {

                            sp++;
                        }
                    }
                    cout << "File " << ListOfFiles.at(i).first << " has " << ListOfFiles.at(i).second.size() - sp << " words." << endl;
                    sp = 0;
                }
            }
            continue;
        }
        if (option == 5)
        {
            string filename = "concatenation.txt";
            ofstream OutFile(filename + ".txt");

            for (size_t i = 0; i < ListOfFiles.size(); i++)
            {
                for (size_t j = 0; j < ListOfFiles.at(i).second.size(); j++)
                {
                    if (ListOfFiles.at(i).second.at(j).length() != 0)
                    {
                        OutFile << ListOfFiles.at(i).second.at(j) << endl;
                    }
                }
            }
            break;
        }
        if (option != 1 || option != 2 || option != 3 || option != 4 || option != 5)
        {
            cout << "Please chose a valid number" << endl;
            continue;
        }
    } while (option != 5);
    return 0;
}

bool open_file(string filename, vector<string> &liststrings)
{
    ifstream infile(filename);

    vector<string> newfile;

    if (infile.is_open())
    {
        string line;
        while (getline(infile, line))
        {
            istringstream ss_line(line);
            while (ss_line)
            {
                string element;
                ss_line >> element;
                if (element.size() != 0)
                {
                    liststrings.push_back(element);
                }
            }
        }

        infile.close();
        return true;
    }
    else
    {
        cout << "File not found" << endl;
        return false;
    }
}

size_t remove_substring(vector<pair<string, vector<string> > > &ListOfFiles, string search, size_t option)
{
    bool find = false;

    if (ListOfFiles.empty())
    {
        cout << "File Manipulator is empty" << endl;
    }
    else
    {
        for (size_t i = 0; i < ListOfFiles.size(); i++)
        {
            for (size_t j = 0; j < ListOfFiles.at(i).second.size(); j++)
            {
                if (ListOfFiles.at(i).second.at(j).find(search) != string::npos)
                {
                    find = true;
                        cout << "Removing " << ListOfFiles.at(i).second.at(j) << " located in file " << ListOfFiles.at(i).first << endl;
                        ListOfFiles.at(i).second.at(j).erase();
                }
            }
        }

        if (find == false)
        {
            cout << "Substring not found" << endl;
        }
    }
    return 0;
}