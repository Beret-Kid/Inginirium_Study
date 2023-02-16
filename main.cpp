#include <SFML/Graphics.hpp>
using namespace sf;
int main() {
    RenderWindow window(VideoMode(400, 240), "SFML");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear(Color(241, 255, 242, 0));

        CircleShape circle(45.f);
        circle.setFillColor(Color(0, 255, 127));
        circle.move(0, 5);

        RectangleShape line(Vector2f(120, 5));
        line.setFillColor(Color(3, 49, 88));
        line.rotate(45);
        
        CircleShape circleContr(45.f);
        circleContr.setFillColor(Color(0, 0, 0, 0));
        circleContr.setOutlineThickness(50);
        circleContr.setOutlineColor(Color(241, 255, 242));
        circleContr.move(0, 5);

        window.draw(circle);
        window.draw(line);
        window.draw(circleContr);

        window.display();
    }
}