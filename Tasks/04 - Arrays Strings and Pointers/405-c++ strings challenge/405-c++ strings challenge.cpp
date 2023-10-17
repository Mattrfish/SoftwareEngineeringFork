#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    size_t loc = input.find("42");
    string locNum = input.substr(loc, 2);
    cout << "The number that follows title = " << locNum << endl;
    cout << "42 is found at location " << loc << endl;

    cout << "type in a word to find out many times it appears" << endl;

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    int N;
    string word;                //This will hold the next word
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn

        if (word == "the")
        {
            N = N++;
        }
        
    }
    cout << "The word THE was written: " << int<< endl;
}

