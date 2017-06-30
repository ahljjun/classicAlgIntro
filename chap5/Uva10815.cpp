#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;


int main()
{
    std::set<std::string> dict;
    std::string line;
    std::string word;
    while(std::getline(cin,line)){
       for(auto &c : line){
           if (std::isalpha(c)){
               c = std::tolower(c);
           }
           else{
               c = ' '; // replace non-alpha char with blanks for wording
           }
       } 

       stringstream ss(line);
       while( ss >> word )  dict.insert(word);
    }

    std::cout<<"output:"<<std::endl;

    for(auto it = dict.begin(); it != dict.end(); it++)
        std::cout<< *it << "\n";

    return 0;
}
