// Helllo.cpp : Defines the entry point for the console application.
//


string randomWord()
{
	const int NUM_WORDS = 5;
	string WORDS[NUM_WORDS] =
	{

		"green",
		"blue",
		"waffle",
		"pancake",
		"bacon"
	};

	init choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];
	return word;
}
