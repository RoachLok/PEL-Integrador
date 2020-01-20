#include "Main.hpp"
#include <TGUI/TGUI.hpp>

using namespace std;
int main(int argc, char* argv[])
{
    // --- RENDER MAIN WINDOW --- //
    sf::RenderWindow window(sf::VideoMode(875, 750), "Espacio Afin");
    tgui::Gui gui(window);

    gui.loadWidgetsFromFile("views/resultHandler.txt"); //Load view from file.

    // --- GETTING TEXT FROM ARGUMENTS --- //
    std::string labelText = "";
    for (int i = 2; i < argc-5; ++i)
        labelText += argv[i] + ' ';

    // --- PULLING WIDGET FROM CURRENT VIEW --- //
    tgui::Label::Ptr resultLabel = gui.get<tgui::Label>("resultLabel");
    resultLabel->setText(labelText);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            gui.handleEvent(event);
        }

        window.clear();
        gui.draw();
        window.display();

        sf::sleep(sf::milliseconds(1));
    }

    return EXIT_SUCCESS;
}