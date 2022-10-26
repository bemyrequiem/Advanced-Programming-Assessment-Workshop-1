#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "wordFreqPair.h"
#include "docSummary.h"
using namespace wfp;
using namespace ds;
using namespace std;

// Method to read the file into a string
string readFileToString(const string& path) {
	ifstream input_f(path);

	// Check that the file was opened
	if (!input_f.is_open()) {
		cerr << "Could not open the file: '" << path << "'" << endl;
		exit(EXIT_FAILURE);
	}

	// Return the string with the file contents in
	return string((istreambuf_iterator<char>(input_f)), istreambuf_iterator<char>());
}

// Comparing two strings alphabetically
bool compare(string a, string b) {
	if (a.compare(b) < 0) {
		return true;
	}
	else { return false; }
}

int main() {
	// Assigning variables
	string input_f_path = "input.txt";
	string text_f;
	WordFreqPair myclass1;
	DocSummary myclass2;

	// Call function to read file into string
	text_f = readFileToString(input_f_path);
	cout << text_f << endl;

	// Count all the sentences and words and add them to the words vector
	myclass2.countSentencesAndWords(text_f);

	// Sort the word list alphabetically
	sort(myclass2.words.begin(), myclass2.words.end(), compare);

	// Output to console
	myclass2.printSummary(myclass1.findWordFreq(myclass2.words, myclass2.words.size()));
}