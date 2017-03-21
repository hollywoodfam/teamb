void play(const string& aWord)
{
	string guess;
	do
	{
		cout << endl << endl << "Your guess: ";
		cin >> guess;

		if ((guess != aWord) && (guess != "quit"))
		{
			cout << "Sorry, that's not it.";
		}
	} while ((guess != aWord) && (guess != "quit"))

	if (guess == aWord)
		cout << endl << "That's it! You Guessed it!" << endl;

	cout << endl << "Thanks for playing.\n" << endl;
}