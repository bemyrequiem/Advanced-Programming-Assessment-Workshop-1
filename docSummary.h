#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

namespace ds {
	class DocSummary {
		public:
			int n_of_sentences = 0;
			int n_of_words = 0;
			vector<string> words;
			void printSummary(string word_freq);
			void countSentencesAndWords(string text);
	};
}