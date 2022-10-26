#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "docSummary.h"
using namespace ds;
using namespace std;

void DocSummary::countSentencesAndWords(string text) {
	// Looping through string to pick out words
	string word;
	for (char c : text) {
		// Normalise to lowercase
		if (toascii(c) >= 65 && toascii(c) <= 132) {
			c = char(tolower(c));
		}

		// Check character isn't space or punctuation
		if (toascii(c) >= 97 && toascii(c) <= 122) {
			word += c;
		}
		// If it is, add the word to the words list
		else {
			// If end of sentence add to sentence counter
			if (c == '.' || c == '!' || c == '?') {
				n_of_sentences += 1;
			}
			if (word != "") {
				words.push_back(word);
			}
			word = "";
		}
	}
}

void DocSummary::printSummary(string word_freq) {
	cout << "\nSentences: " << n_of_sentences << endl;
	cout << "Words: " << words.size() << "\n" << endl;
	cout << word_freq << endl;
}