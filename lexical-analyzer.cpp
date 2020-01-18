// Aaron Yoon

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int lexer(char character){
    /*
        1. Keyword or Identifier
        2. Separator
        3. Operational
        4. Number (including decimal point)
        5. Comments
        6. spaces or end of line
    */

    // Check to see if character is an alphabet < Can either be a Keyword or an Identifier >   
    if(character == 'a'|| character == 'b'|| character == 'c'|| character == 'd'|| character == 'e'|| character == 'f'|| character == 'g'|| character == 'h'|| character == 'i'|| 
    character == 'j'|| character == 'k'|| character == 'l'|| character == 'm'|| character == 'n'|| character == 'o'|| character == 'p'|| character == 'q'|| character == 'r'|| 
    character == 's'|| character == 't'|| character == 'u'|| character == 'v'|| character == 'w'|| character == 'x'|| character == 'y'|| character == 'z'){
        return 1;
    }

    // Checks if separators
    else if(character == '(' || character == ')' || character == '{' || character == '}' || 
    character == '[' || character == ']' || character == ',' || 
    character == '.' || character == ':' || character == ';'){
        return 2;
    }

    // Checks if operator
    else if(character == '<' || character == '>' || character == '=' || 
    character == '+' || character == '-' || character == '*' || 
    character == '/' || character == '%'){
        return 3;
    }

    // Checks if it's a number <Must be able to take in decimal points>
    else if(character == '1' || character == '2' || character == '3' || 
    character == '4' || character == '5' || character == '6' || 
    character == '7' || character == '8' || character == '9' || character == '0'){
        return 4;
    }

    // Checks if it's a comment
    else if (character == '!'){
        return 5;
    }

    // Checks if there is a space of if it's the end of a line
    else if(character == ' ' || character == '\n'){
        return 6;
    }

    else{
        return 0;
    }     

    return 0;
}

/*
    Function will determine if the word is a keyword. 
    Otherwise it'll just be classified as an identifier
*/

void keywords(ofstream &outputFile, char *text, int count){

    int i = 0;
    //find if
    if(text[i] == 'i' &&  text[i+1] == 'f'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << endl;
    }
    //find int
    else if(text[i] == 'i' && text[i+1] == 'n' && text[i+2] == 't'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << endl;
    }
    
    //find string
    else if(text[i] == 's' && text[i+1] == 't' && text[i+2] == 'r' && text[i+3] == 'i' && text[i+4] == 'n' && text[i+5] == 'g'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
    }
    //find else
    else if (text[i] == 'e' && text[i+1] == 'l' && text[i+2] == 's' && text[i+3] == 'e'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
        i = i+3;
    }

    //find while 
    else if (text[i] == 'w' && text[i+1] == 'h' && text[i+2] == 'i' && text[i+3] == 'l' && text[i+4] == 'e'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        }

    //find for 
    else if (text[i] == 'f' && text[i+1] == 'o' && text[i+2] == 'r'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << endl;
    }

    //find float
    else if (text[i] == 'f' && text[i+1] == 'l' && text[i+2] == 'o' && text[i+3] == 'a' && text[i+4] == 't'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
    }

    //find bool
    else if(text[i] == 'b' && text[i+1] == 'o' && text[i+2] == 'o' && text[i+3] == 'l'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
    }

    //find then
    else if (text[i] == 't' && text[i+1] == 'h' && text[i+2] == 'e' && text[i+3] == 'n'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
    }

    //find endif
    else if(text[i] == 'e' && text[i+1] == 'n' && text[i+2] == 'd' && text[i+3] == 'i' && text[i+4] == 'f'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
    }

    //find whileend
    else if(text[i] == 'w' && text[i+1] == 'h' && text[i+2] == 'i' && text[i+3] == 'l' && text[i+4] == 'e' && text[i+5] == 'e' && text[i+6] == 'n' && text[i+7] == 'd'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << text[i+6] << text[i+7] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << text[i+6] << text[i+7] << endl;
    }

    //find do
    else if(text[i] == 'd' &&  text[i+1] == 'o'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << endl;
    }

    //find or
    else if(text[i] == 'o' &&  text[i+1] == 'r'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << endl;
    }

    //find and
    else if(text[i] == 'a' && text[i+1] == 'n' && text[i+2] == 'd'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << endl;
    }
    
    //find doend
    else if (text[i] == 'd' && text[i+1] == 'o' && text[i+2] == 'e' && text[i+3] == 'n' && text[i+4] == 'd'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        }

    //find forend
    else if(text[i] == 'f' && text[i+1] == 'o' && text[i+2] == 'r' && text[i+3] == 'e' && text[i+4] == 'n' && text[i+5] == 'd'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
    }

    //find output
    else if(text[i] == 'o' && text[i+1] == 'u' && text[i+2] == 't' && text[i+3] == 'p' && text[i+4] == 'u' && text[i+5] == 't'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << endl;
    }

    //find input
    else if (text[i] == 'i' && text[i+1] == 'n' && text[i+2] == 'p' && text[i+3] == 'u' && text[i+4] == 't'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << endl;
    }

    //find function
    else if(text[i] == 'f' && text[i+1] == 'u' && text[i+2] == 'n' && text[i+3] == 'c' && text[i+4] == 't' && text[i+5] == 'i' && text[i+6] == 'o' && text[i+7] == 'n'){
        cout << "Token: Keyword" << setw(17) << "=" << setw(15);
        cout << "Lexeme: " << text[i] << text[i+1] << text[i+2] << text[i+3] << endl;
        outputFile << "Keyword" << setw(13) << '=' << setw(11) << text[i] << text[i+1] << text[i+2] << text[i+3] << text[i+4] << text[i+5] << text[i+6] << text[i+7] << endl;
    }
    // Needs to have all other results as an identifier
    else{
        cout << "Token: Identifiers" << setw(13) << "=" << setw(15);
        cout << "Lexeme: ";
        outputFile << "Identifiers" << setw(9) << '=' << setw(11);

        //cout << text[i];
        for(i = 0; i < count; i++){
            cout << text[i];
            outputFile << text[i];
        }
        outputFile << endl;
        cout << endl;
    }
    return;
}


/* 
    1) Call the lexer for token (keyword, identifier, operator, separator, comments)
    2) Print the lexeme
    3) endwhile 
*/

int main(){

    char character;
    char text[1000];
    int numTable;
    string fileName;
    int count = 0;

    cout << "Please enter the txt file name: ";
    getline(cin, fileName);

    //ifstream myFile("sample.txt");
    fstream myFile( fileName.c_str() );
    ofstream outputFile("Output File.txt");
    
    outputFile << "  Tokens" << setw(27) << "Lexemes" << endl << endl;

    while(!myFile.eof()){

        myFile >> noskipws >> character;
        numTable = lexer(character);
        //text[count] = character;

        switch(numTable){
            case 1:
                // Needs to loop till next separator and pass that into the lexer function
                
                //cout << "Token: Keyword" << setw(17) << "=" << setw(15);
                //cout << "Lexeme: ";
                while(numTable != 2 && numTable !=3 && numTable != 6){
                    //cout << character;
                    text[count] = character;
                    myFile >> noskipws >> character;
                    numTable = lexer(character);
                    count++;
                }
                // Need to call function keywords to determine if it is a keyword or not
                keywords(outputFile, text, count);

                if(numTable == 2){
                    cout << "Token: Separator" << setw(15) << "=" << setw(15);
                    cout << "Lexeme: " << character << endl;
                    outputFile << "Separator" << setw(11) << '=' << setw(11) << character << endl;
                }
                else if (numTable == 3){
                    cout << "Token: Operator" << setw(16) << "=" << setw(15);
                    cout << "Lexeme: " << character << endl;
                    outputFile << "Operator" << setw(12) << '=' << setw(11) << character << endl;
                }
                count = 0;          // resets the count so that new text replace the older ones
                break;

             case 2:
                cout << "Token: Separator" << setw(15) << "=" << setw(15);
                cout << "Lexeme: " << character << endl;
                outputFile << "Separator" << setw(11) << '=' << setw(11) << character << endl;
                break;

            case 3:
                cout << "Token: Operator" << setw(16) << "=" << setw(15);
                cout << "Lexeme: " << character << endl;
                outputFile << "Operator" << setw(12) << '=' << setw(11) << character << endl;
                break;

            case 4:
                cout << "Token: Numbers" << setw(17) << "=" << setw(15);
                cout << "Lexeme: "; 
                outputFile << "Numbers" << setw(13) << '=' << setw(11);
                // Needs to loop till next space or sepaarator/operator
                while (numTable != 3 && numTable != 6){
                    cout << character;
                    outputFile << character;
                    myFile >> noskipws >> character;
                    numTable = lexer(character);
                }
                outputFile << endl;
                cout << endl;
                if (numTable == 3){
                    cout << "Token: Operator" << setw(16) << "=" << setw(15);
                    cout << "Lexeme: " << character << endl;
                    outputFile << "Operator" << setw(12) << '=' << setw(11) << character << endl;
                }
                break;
            case 5:
                // Loops to find the next !
                do{
                    myFile >> noskipws >> character;
                    numTable = lexer(character);
                } while (numTable != 5);
                //cout << "End of comment" << endl;
                break;
        }
        //cout << ' ' << character << endl;
    }

    cout << endl;
    myFile.close();     
    return 0;
}