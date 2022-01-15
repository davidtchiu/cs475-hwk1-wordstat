#ifndef STATS_H_
#define STATS_H_

//constants
#define ALPHABET_SIZE 26

//structs
typedef struct
{
	int histo[ALPHABET_SIZE];
	int wordCount;
	int vowelCount;
	int consonantCount;
} WordStats;

//functions declarations
WordStats initStats(WordStats st);
WordStats updateStats(WordStats st, const char input[]);
WordStats updateVowelCons(WordStats st, const char input[]);
WordStats updateWordCount(WordStats st, const char input[]);
void updateHistogram(int histo[], const char str[]);
void printVowelConsFreq(WordStats st);
void printWordCount(WordStats st);
void printHistogram(WordStats st);

#endif /* STATS_H_ */
