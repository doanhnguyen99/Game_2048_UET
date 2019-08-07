#include "Musics.h"

void Musics()
{
	sf::Music music;
	if (!music.openFromFile("media.io_Gianna-Rino-Gaetano.wav"))
	{
		cout << "Error " << endl;
	}

	music.setVolume(100.f);
	music.play();
}