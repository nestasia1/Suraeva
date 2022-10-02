#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	size_t songIndex, movieIndex, personIndex;

	string movies[28] = { "Back To The Future (1985)", "Star Wars (1977)", "Interstellar (2014)", "The Green Mile (1999)",
		"Life Is Beautiful (1997)", "Saving Private Ryan (1998)", "City Of God (2002)", "The Silence Of The Lambs (1991)",
		"It's A Wonderful Life (1946)", "Se7en (1995)", "One Flew Over The Cuckoos Nest (1975)", "Goodfellas (1990)",
		"The Matrix (1999)", "The Lord of the Rings: The Two Towers (2002)", "Inception (2010)", "Fight Club (1999)",
		"Forrest Gump (1994)", "The Good, The Bad And The Ugly (1966)", "Pulp Fiction (1994)", "Schindler's List (1993)",
		"12 Angry Men (1957)", "The Dark Knight (2008)", "The Godfather (1972)", "The Shawshank Redemption (1994)",
		"Moonlight (2016)", "Dolemite is My Name (2019)", "The Irishman (2019)", "Roma (2018)" };
	string people[28] = { "Marilyn Monroe", "Queen Elizabeth", "John F. Kennedy", "Martin Luther King",
		"Winston Churchill", "Donald Trump", "Bill Gates", "Muhammad Ali",
		"Mother Teresa", "Christopher Columbus", "Charles Darwin", "Elvis Presley",
		"Albert Einstein", "Paul McCartney", "Queen Victoria", "Leonardo da Vinci",
		"Vincent Van Gogh", "Franklin D. Roosevelt", "Thomas Edison", "Ludwig Beethoven",
		"George Orwell", "Vladimir Putin", "Walt Disney", "Neil Armstrong",
		"Barack Obama", "Angelina Jolie", "Henry Ford", "Joseph Stalin" };
	string songs[9] = { "'Umbrella' by Rihanna featuring Jay-Z", "'Shake it Off' by Taylor Swift", "'Toxic' by Britney Spears",
		"'Rolling in the Deep' by Adele", "'Firework' by Katy Perry", "'Rehab' by Amy Winehouse",
		"'Blinding Lights' by The Weeknd", "'Dancing on My Own' by Robyn", "'Hey Ya!' by Outkast" };
	string letters = "абвгдежзиклмнопрстуфхцчшщэюя";

	string name, lastname;
	int year;

	cout << "Hello! If you want to have fun, then I suggest you take the test. Please enter your name.\n";
	cin >> name;
	cout << "Excellent! Now enter your last name.\n";
	cin >> lastname;
	cout << "Lastly, enter your year of birth.\n";
	cin >> year;

	if (year == 0)
	{
		cout << "Enter correct year" << endl;
		return 0;
	}


	movieIndex = letters.find(tolower(name[0]));
	cout << "Your movie is " << movies[movieIndex] << endl;

	personIndex = letters.find(tolower(lastname[0]));
	cout << "Your VIP is " << people[personIndex] << endl;

	songIndex = 0;
	while (year > 0)
	{
		songIndex += year % 10;
		year /= 10;
	}

	songIndex = songIndex / 10 + songIndex % 10;

	cout << "Your song is " << songs[songIndex - 1] << endl;
}
