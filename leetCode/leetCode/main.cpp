#include "print.h"

int main() {

	string text = "How many helicopters can a human eat in one sitting?";
	vector<char> out = {};
	int index = 0;

	while(index!=text.length()-1)
	{
		if(text[index] != ' ')
		{
			out.push_back(text[index]);
		}
		index = index+1;
	}

	printVector(out);

}