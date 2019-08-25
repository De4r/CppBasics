#include <iostream>

using namespace std;

class Speaker {
private:
	string letter;
	int id;
public:
	// Constructor
	Speaker() {
				cout << "Speaker created" << endl;
	}
	// Copy construtor
	Speaker(const Speaker& other) :letter(other.letter) {
		cout << "Speaker copied from speaker number " << other.id << endl;
	}
	// Destructor
	~Speaker() {
		cout << "Speaker " << id << " destroyed." << endl;
	}

	void setLetterAndId(char letter, int id) {
		this->letter = letter;
		this->id = id;
	}

	void speak() {
		cout << letter << " " << flush;
	}
};


int main() {

	
	Speaker* pSpeaker = new Speaker[26];
	char letter = 'a';

	for (size_t i = 0; i <26; i++)
	{
		pSpeaker[i].setLetterAndId(letter, i);
		pSpeaker[i].speak();
		letter++;
	}
	cout << endl;

	delete [] pSpeaker;

	return 0;
}