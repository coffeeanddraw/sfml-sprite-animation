#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::VideoMode vm(500, 500);
	sf::RenderWindow window(vm, "Sprite Animation");

	sf::Texture animTexture;
	if (!animTexture.loadFromFile("graphics/eye-sheet-x8.png")) {
		std::cout << "eye-sheet-x8 missing in graphics folder.";
		return -1;
	}

	sf::Vector2i spriteSize(152, 72);
	std::vector<sf::Sprite> animSprites;

	int sheetRow = animTexture.getSize().y / spriteSize.y;
	int sheetColumn = animTexture.getSize().x / spriteSize.x;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
	}
	return 0;
}