#include <SFML/Graphics.hpp>

int main() {
	sf::VideoMode vm(500, 500);
	sf::RenderWindow window(vm, "Sprite Animation");

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