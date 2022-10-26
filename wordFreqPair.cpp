#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "wordFreqPair.h"
using namespace wfp;
using namespace std;

string WordFreqPair::findWordFreq(vector<string> words, int length) {
	int count = 0;
	string word_freq;

	// Loop through sorted list of words to find the frequency of each word
	for (int n = 0; n < length; n++) {
		int count = 1;
		string line = words[n] + ": ";

		// Checks how many of the same current word appear
		while (true) {
			if (n + count < length) {
				if (words[n] == words[n + count]) {
					count++;
				}
				else { break; }
			}
			else { break; }
		}

		line += to_string(count) + "\n";
		word_freq += line;
		n += count - 1;
	}

	return word_freq;
}