#include<iostream>
#include <string> 
using namespace std;

int main ()
{
    string alphabet{"[ abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPRSTUVWXYZ"};
    string key{" [XZNLWEBGJHQYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secretMessage{};

    cout <<"Enter your secret message: ";
    getline(cin,secretMessage);

    string encryptedMassage{};

    cout << "\nEncrypting message..."<<endl;

    for(auto c:secretMessage)
    {
        size_t position = alphabet.find(c);
        if(position != string::npos)
        {
            char newChar{key.at(position)};
            encryptedMassage += newChar;
        }
        else
        {
            encryptedMassage += c;
        }
    }

    cout <<"\nEncrypted message: "<< encryptedMassage <<endl;

    string decryptedMessage {};
    cout << "\nDecrypted message..."<<endl;

    for(char c:encryptedMassage)
    {
        size_t position = key.find(c);
        if(position != string::npos)
        {
            char newChar{alphabet.at(position)};
            decryptedMessage += newChar;
        }
        else
        {
            decryptedMessage += c;
        }
    }

    cout <<"\nDecrupted message is "<<decryptedMessage<<endl;
    
    
    
    return 0;
}