#include "Main.hpp"
#include <TGUI/TGUI.hpp>
#include <fstream>
#include <iostream>

#define LOAD_ON_BODY(path) body->loadWidgetsFromFile(path)
#define FIELD_FROM_WINDOW(name, fieldName) tgui::EditBox::Ptr name = gui.get<tgui::EditBox>(fieldName)

#define CALL_MATLAB system("matlab -nodesktop -nosplash -r \"tempScript\"; exit")

void comboActionListener(tgui::ComboBox::Ptr comboBox, tgui::Panel::Ptr body)
{
    switch (comboBox->getSelectedItemIndex())
    {
        case 0:
        {
            LOAD_ON_BODY("views/straight-straight.txt");
            break;
        }
        case 1:
        {
            LOAD_ON_BODY("views/straight-plane.txt");
            break;
        }
        case 2:
        {
            LOAD_ON_BODY("views/plane-plane.txt");
            break;
        }
        case 3:
        {
            LOAD_ON_BODY("views/3xPlane.txt");
            break;
        }
        default:
            LOAD_ON_BODY("views/straight-straight.txt");
    }
}

void twoLine(std::string row1, std::string row2, std::string row3, std::string sub1, std::string sub2, std::string sub3,
                std::string p1, std::string p2, std::string p3, std::string p12, std::string p22, std::string p32)
{
    std::ofstream outputFile("tempScript.m");
    std::ifstream inputFile("matlab-scripts/twoLine.m");
    std::string tempString;

    outputFile << "m = [" + row1 + ';' + row2 + ';' + row3 + "];\n";
    outputFile << "M = [" + row1 + ' ' + sub1 + ';' + row2 + ' ' + sub2 + ';' + row3 + ' ' + sub3 + "];\n";

    outputFile << "v1 = [" + p1 + ',' + p2 + ',' + p3 + "];\n";
    outputFile << "v12 = [" + p12 + ',' + p22 + ',' + p32 + "];\n";


    outputFile << inputFile.rdbuf();

    inputFile.close();
    outputFile.close();
    CALL_MATLAB;
}

void linePlane(std::string row1, std::string row2, std::string row3, std::string sub1, std::string sub2, std::string sub3,
                std::string p1, std::string p2, std::string p3, std::string p12, std::string p22, std::string p32)
{
    std::ofstream outputFile("tempScript.m");
    std::ifstream inputFile("matlab-scripts/twoLine.m");
    std::string tempString;

    outputFile << "m = [" + row1 + ';' + row2 + ';' + row3 + "];\n";
    outputFile << "M = [" + row1 + ' ' + sub1 + ';' + row2 + ' ' + sub2 + ';' + row3 + ' ' + sub3 + "];\n";

    outputFile << "v1 = [" + p1 + ',' + p2 + ',' + p3 + "];\n";
    outputFile << "v12 = [" + p12 + ',' + p22 + ',' + p32 + "];\n";


    outputFile << inputFile.rdbuf();

    inputFile.close();
    outputFile.close();
    CALL_MATLAB;
}

void twoPlane(std::string nor1, std::string nor2, std::string impli1, std::string impli2)
{
    std::ofstream outputFile("tempScript.m");
    std::ifstream inputFile("matlab-scripts/twoPlane.m");
    std::string tempString;

    outputFile << "m = [" + nor1 + ';' + nor2 + "];\n";
    outputFile << "M = [" + impli1 + ';' + impli2 + "];\n";

    outputFile << inputFile.rdbuf();

    inputFile.close();
    outputFile.close();
    CALL_MATLAB;
}

void threePlane(std::string row1, std::string row2, std::string row3, std::string sub1, std::string sub2, std::string sub3,
                std::string p1, std::string p2, std::string p3, std::string p12, std::string p22, std::string p32)
{
    std::ofstream outputFile("tempScript.m");
    std::ifstream inputFile("matlab-scripts/twoLine.m");
    std::string tempString;

    outputFile << "m = [" + row1 + ';' + row2 + ';' + row3 + "];\n";
    outputFile << "M = [" + row1 + ' ' + sub1 + ';' + row2 + ' ' + sub2 + ';' + row3 + ' ' + sub3 + "];\n";

    outputFile << "v1 = [" + p1 + ',' + p2 + ',' + p3 + "];\n";
    outputFile << "v12 = [" + p12 + ',' + p22 + ',' + p32 + "];\n";


    outputFile << inputFile.rdbuf();

    inputFile.close();
    outputFile.close();
    CALL_MATLAB;
}

int main()
{
    // --- RENDER MAIN WINDOW --- //
    sf::RenderWindow window(sf::VideoMode(800, 600), "Espacio Afin");
    tgui::Gui gui(window);

    gui.loadWidgetsFromFile("views/parent.txt"); //Load view from file.

    // --- PULLING WIDGETS FROM CURRENT VIEW --- //
    tgui::Button::Ptr cancelButton = gui.get<tgui::Button>("cancelButton");
    cancelButton->connect("pressed", [&] () {window.close();});

    tgui::ComboBox::Ptr comboBox = gui.get<tgui::ComboBox>("comboBox");
    comboBox->setSelectedItem("Recta - Recta");

    tgui::Panel::Ptr body = gui.get<tgui::Panel>("body");
    LOAD_ON_BODY("views/straight-straight.txt"); //Load from file into body panel.

    //ComboBox ActionListener Setup.
    comboBox->connect("ItemSelected", comboActionListener, comboBox, body);

    tgui::Button::Ptr runButton = gui.get<tgui::Button>("runButton");
    runButton->connect("pressed", [&] ()
                            {   // --- RUNBUTTON FIELD GET TEXT METHOD --- //
                                switch (comboBox->getSelectedItemIndex())
                                {
                                    case 0: //Straight <-> Straight
                                    {
                                        //-- Pulling textFields from child view.
                                        FIELD_FROM_WINDOW(p1Box     , "p1Box"       );
                                        FIELD_FROM_WINDOW(p2Box     , "p2Box"       );
                                        FIELD_FROM_WINDOW(p3Box     , "p3Box"       );
                                        FIELD_FROM_WINDOW(p12Box    , "p'Box1"      );
                                        FIELD_FROM_WINDOW(p22Box    , "p'Box2"      );
                                        FIELD_FROM_WINDOW(p32Box    , "p'Box3"      );
                                        FIELD_FROM_WINDOW(lambdBox1 , "lambdaBox1"  );
                                        FIELD_FROM_WINDOW(lambdBox2 , "lambdaBox2"  );
                                        FIELD_FROM_WINDOW(lambdBox3 , "lambdaBox3"  );
                                        FIELD_FROM_WINDOW(muBox1    , "muBox1"      );
                                        FIELD_FROM_WINDOW(muBox2    , "muBox2"      );
                                        FIELD_FROM_WINDOW(muBox3    , "muBox3"      );

                                        //Third M matrix column
                                        std::string sub1 =  p12Box->getText().toAnsiString() + '-' +
                                                            p1Box->getText().toAnsiString();

                                        std::string sub2 =  p22Box->getText().toAnsiString() + '-' +
                                                            p2Box ->getText().toAnsiString();

                                        std::string sub3 =  p32Box->getText().toAnsiString() + '-' +
                                                            p3Box ->getText().toAnsiString();

                                        std::string row1 =  lambdBox1->getText().toAnsiString() + " -" +
                                                            muBox1   ->getText().toAnsiString();

                                        std::string row2 =  lambdBox2->getText().toAnsiString() + " -" +
                                                            muBox2   ->getText().toAnsiString();

                                        std::string row3 =  lambdBox3->getText().toAnsiString() + " -" +
                                                            muBox3   ->getText().toAnsiString();

                                        twoLine(row1, row2, row3, sub1, sub2, sub3,
                                                    p1Box ->getText().toAnsiString(),
                                                    p2Box ->getText().toAnsiString(),
                                                    p3Box ->getText().toAnsiString(),
                                                    p12Box->getText().toAnsiString(),
                                                    p22Box->getText().toAnsiString(),
                                                    p32Box->getText().toAnsiString());

                                        break;
                                    }
                                    case 1: //Straight <-> Plane
                                    {
                                        //-- Pulling textFields from child view.
                                        FIELD_FROM_WINDOW(p1Box     , "p1Box"       );
                                        FIELD_FROM_WINDOW(p2Box     , "p2Box"       );
                                        FIELD_FROM_WINDOW(p3Box     , "p3Box"       );
                                        FIELD_FROM_WINDOW(lambdBox1, "lambdaBox1"  );
                                        FIELD_FROM_WINDOW(lambdBox2, "lambdaBox2"  );
                                        FIELD_FROM_WINDOW(lambdBox3, "lambdaBox3"  );
                                        FIELD_FROM_WINDOW(aBox      , "aBox"        );
                                        FIELD_FROM_WINDOW(bBox      , "bBox"        );
                                        FIELD_FROM_WINDOW(cBox      , "cBox"        );
                                        FIELD_FROM_WINDOW(dBox      , "dBox"        );

                                        std::string p       =
                                                    p1Box->getText()    .toAnsiString() + ' ' +
                                                    p2Box->getText()    .toAnsiString() + ' ' +
                                                    p3Box->getText()    .toAnsiString() + ' ' ;

                                        std::string lamVec  =
                                                    lambdBox1->getText().toAnsiString() + ' ' +
                                                    lambdBox2->getText().toAnsiString() + ' ' +
                                                    lambdBox3->getText().toAnsiString() + ' ' ;

                                        std::string imPli   =
                                                    aBox->getText()     .toAnsiString() + ' ' +
                                                    bBox->getText()     .toAnsiString() + ' ' +
                                                    cBox->getText()     .toAnsiString() + ' ' +
                                                    dBox->getText()     .toAnsiString() + ' ' ;

                                        break;
                                    }
                                    case 2: //Plane <-> Plane
                                    {
                                        //-- Pulling textFields from child view.
                                        FIELD_FROM_WINDOW(aBox      , "aBox"        );
                                        FIELD_FROM_WINDOW(bBox      , "bBox"        );
                                        FIELD_FROM_WINDOW(cBox      , "cBox"        );
                                        FIELD_FROM_WINDOW(dBox      , "dBox"        );
                                        FIELD_FROM_WINDOW(a2Box     , "a'Box"       );
                                        FIELD_FROM_WINDOW(b2Box     , "b'Box"       );
                                        FIELD_FROM_WINDOW(c2Box     , "c'Box"       );
                                        FIELD_FROM_WINDOW(d2Box     , "d'Box"       );

                                        std::string nor1    =
                                                    aBox->getText()     .toAnsiString() + ' ' +
                                                    bBox->getText()     .toAnsiString() + ' ' +
                                                    cBox->getText()     .toAnsiString() + ' ' ;

                                        std::string impli1  =
                                                    nor1 +
                                                    dBox->getText()     .toAnsiString() + ' ' ;

                                        std::string nor2    =
                                                    a2Box->getText()    .toAnsiString() + ' ' +
                                                    b2Box->getText()    .toAnsiString() + ' ' +
                                                    c2Box->getText()    .toAnsiString() + ' ' ;

                                        std::string impli2  =
                                                    nor2 +
                                                    d2Box->getText()    .toAnsiString() + ' ' ;

                                        twoPlane(nor1, nor2, impli1, impli2);
                                        break;
                                    }
                                    case 3: //Plane <-> Plane <-> Plane
                                    {
                                        //-- Pulling textFields from child view.
                                        FIELD_FROM_WINDOW(aBox      , "aBox"        );
                                        FIELD_FROM_WINDOW(bBox      , "bBox"        );
                                        FIELD_FROM_WINDOW(cBox      , "cBox"        );
                                        FIELD_FROM_WINDOW(dBox      , "dBox"        );
                                        FIELD_FROM_WINDOW(a2Box     , "a'Box"       );
                                        FIELD_FROM_WINDOW(b2Box     , "b'Box"       );
                                        FIELD_FROM_WINDOW(c2Box     , "c'Box"       );
                                        FIELD_FROM_WINDOW(d2Box     , "d'Box"       );
                                        FIELD_FROM_WINDOW(a3Box     , "a''Box"      );
                                        FIELD_FROM_WINDOW(b3Box     , "b''Box"      );
                                        FIELD_FROM_WINDOW(c3Box     , "c''Box"      );
                                        FIELD_FROM_WINDOW(d3Box     , "d''Box"      );

                                        std::string imPli   =
                                                    aBox->getText()     .toAnsiString() + ' ' +
                                                    bBox->getText()     .toAnsiString() + ' ' +
                                                    cBox->getText()     .toAnsiString() + ' ' +
                                                    dBox->getText()     .toAnsiString() + ' ' ;

                                        std::string imPli2  =
                                                    a2Box->getText()    .toAnsiString() + ' ' +
                                                    b2Box->getText()    .toAnsiString() + ' ' +
                                                    c2Box->getText()    .toAnsiString() + ' ' +
                                                    d2Box->getText()    .toAnsiString() + ' ' ;

                                        std::string imPli3  =
                                                    a3Box->getText()    .toAnsiString() + ' ' +
                                                    b3Box->getText()    .toAnsiString() + ' ' +
                                                    c3Box->getText()    .toAnsiString() + ' ' +
                                                    d3Box->getText()    .toAnsiString() + ' ' ;

                                        break;
                                    }
                                    default:
                                        break;
                                }
                            });
                            // --- RUNBUTTON FIELD GET TEXT METHOD END --- //

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