#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

string makeKey(string s)
{
    for(auto &c : s)
        c = tolower(c);
    sort(s.begin(), s.end());
    return s;
}


vector<string> readWords()
{
    string line;
    string word;
    vector<string> strVec;
    while(getline(cin, line)){
        stringstream ss(line);
        while(ss >> word) strVec.push_back(word); 
    }

    return strVec;
}

void mapWords(const vector<string> &vecStr, map<string, int> &wordMap)
{
    for(auto word : vecStr){
        string key = makeKey(word); 
        if (wordMap.find(key) == wordMap.end())
            wordMap[key]= 0;
        wordMap[key]++;
    }
}


int main()
{
    map<string ,int> wordMap;
    auto wordsVec = readWords();

    mapWords(wordsVec, wordMap);

    for(auto word : wordsVec){
        if ( wordMap[makeKey(word)]  == 1 )
            std::cout<< word << endl;
    }

    return 0;
}
