#include <iostream>
#include <cstring>
using namespace std;

class TextAnalyzer{
    char * text;
    int vowels,consonants,whitespaces;
    public:
    TextAnalyzer():text(nullptr),vowels(0),consonants(0),whitespaces(0){}
    void InputText(){
        int size;
        cout<<"Enter the size of the text: ";
        cin>>size;
        text = new char[size+1]; // dynamic memory allocation
        cout<<"Enter the text: ";
        cin.ignore();
        cin.getline(text,size+1);
    }
    void analyzetext(){
        vowels = consonants = whitespaces = 0;
        for(int i=0;text[i] != '\0';i++){
            char ch = tolower(text[i]);
            if (ch == 'a'|| ch == 'e'|| ch=='i'|| ch=='o'||ch=='u')
                    vowels++;
            else if(isalpha(ch))
                consonants++;
                else if(isspace(ch))
                    whitespaces++;
         }
    }
    void display(){
        cout<<"Vowels: "<<vowels<<endl;
        cout<<"Consonants: "<<consonants<<endl;
        cout<<"WhiteSpaces: "<<whitespaces<<endl;
    }
    ~TextAnalyzer(){
        delete[] text;
    }
};
int main(){
    TextAnalyzer analyzer;
    analyzer.InputText();
    analyzer.analyzetext();
    analyzer.display();
    return 0;
}
