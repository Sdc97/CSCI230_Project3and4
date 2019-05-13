#include <iostream>

using namespace std;

int ELFhash(char* key);

int sfold(char* key);

int main() {
	cout << "This program compares the indexes of multiple sfold and ELFhash when placing the same string." << endl;

	char hello[] = "HELLO WORLD";
	cout << "\nThe string " << hello << " would hash to position " << sfold(hello) << " using sfold." << endl;
	cout << "The string " << hello << " would hash to position " << ELFhash(hello) << " using ELFhash." << endl;
	char hear[] = "NOW HEAR THIS";
	cout << "\nThe string " << hear << " would hash to position " << sfold(hear) << " using sfold." << endl;
	cout << "The string " << hear << " would hash to position " << ELFhash(hear) << " using ELFhash." << endl;
	char now[] = "HEAR THIS NOW";
	cout << "\nThe string " << now << " would hash to position " << sfold(now) << " using sfold." << endl;
	cout << "The string " << now << " would hash to position " << ELFhash(now) << " using ELFhash." << endl;

}

int ELFhash(char* key)
{
	unsigned long h = 0;
	while (*key) {
		h = (h << 4) + *key++;
		unsigned long g = h & 0xF0000000L;
		if (g) {
			h ^= g >> 24;
		}
		h &= ~g;
	}
	return h % 101;
}

int sfold(char* key)
{
	unsigned int* lkey = (unsigned int*)key;
	int intlength = strlen(key) / 4;
	unsigned int sum = 0;
	for (int i = 0; i < intlength; i++)
		sum += lkey[i];
	
	// Now deal with the extra chars at the end
	int extra = strlen(key) - intlength*4;
	char temp[4];
	lkey = (unsigned int*)temp;
	lkey[0] = 0;
	for (int i = 0; i < extra; i++)
		temp[i] = key[intlength * 4 + i];
	sum += lkey[0];

	return sum % 101;
}
