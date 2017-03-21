string randomWord()
{
	const int NUM_WORDS = 5;
	string WORDS[NUM_WORDS] =
	{

		"wall",
		"glasses",
		"labored",
		"persistant",
		"jumble"
	};

	init choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];
	
	return word;
}
