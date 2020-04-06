/*
 * =====================================================================================
 *
 *       Filename:  ex19_02.cpp
 *
 *    Description:   Define a multiset to store entered words and their meanings; that is, make a
*   multiset work as a dictionary. (Hint: The multiset should be one of a
 *  structure that contains two strings: the word and its meaning.)
 *
 *        Version:  1.0
 *        Created:  2020年03月26日 08时17分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  bo lee
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
#include<string>
#include<set>

using namespace std;

struct WordAndMeaing
{
    string word;
    string meaning;
    WordAndMeaing(const string& inputWord, const string& inputMeaning):word(inputWord),meaning(inputMeaning){};
    
    bool operator< (const WordAndMeaing& pairAnotherWord) const
     {
         return (word < pairAnotherWord.word);
     }

};

int main()
{
    multiset<WordAndMeaing> mstrWordAndMeaning;
    WordAndMeaing word1("bo","is handsome"); 
    WordAndMeaing word2("lee","strong");

    mstrWordAndMeaning.insert(word1);
    mstrWordAndMeaning.insert(word2);

    return 0;
}

