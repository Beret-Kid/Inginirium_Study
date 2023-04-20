#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(640, 480), "Module 3 - Testing");
    CircleShape triangle6(65.f, 6);
    triangle6.setFillColor(Color::White);
    triangle6.setPosition(Vector2f(window.getSize().x / 2, window.getSize().y / 2));
    triangle6.setOrigin(Vector2f(triangle6.getRadius(), triangle6.getRadius()));
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(triangle6);
        window.display();
    }

    return 0;
}