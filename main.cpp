#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


int main()
{
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("sound.mp3"))
        return -1;
    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);

    sf::Text text;
    sf::Font font;
    if (!font.loadFromFile("OpenSans.ttf"))
        return -1;
    text.setString("WTF WTF WTF\nWTF WTF WTF\nWTF WTF WTF\nWTF WTF WTF\nWTF WTF WTF");
    text.setFont(font);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(text);
        window.display();
    }

    return 0;
}