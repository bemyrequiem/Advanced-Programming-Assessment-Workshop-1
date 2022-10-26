#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

namespace wfp {
	class WordFreqPair {
		public:
			string findWordFreq(vector<string> words, int length);
	};
}