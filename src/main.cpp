#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Starting!" << std::endl;
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    window.setFramerateLimit(60);

    sf::Font font;
    font.loadFromFile("../content/arial.ttf");

    sf::Text text("hello", font);
    text.setCharacterSize(30);
    text.setStyle(sf::Text::Bold);
    text.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.draw(text);
        window.display();
    }
    
    return 0;
}