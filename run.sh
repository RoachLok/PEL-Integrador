g++.exe -MT build/obj/Main.cpp.o -MMD -MP -MF build/dep/Main.cpp.Td -Isrc/ -Ilib/ \
	-IC:/SFML-2.5.1/include -IC:/TGUI-0.8/include -include build/obj/PCH.hpp -O2 -std=c++17 \
	-Wall -Wextra -Wpedantic -Wunreachable-code -Wunused -Wignored-qualifiers -Wcast-align \
	-Wformat-nonliteral -Wformat=2 -Winvalid-pch -Wmissing-declarations -Wmissing-format-attribute -Wmissing-include-dirs \
	-Wredundant-decls -Wswitch-default -Wodr -fdiagnostics-color=always -o build/obj/Main.cpp.o -c src/Main.cpp \
	&& mv -f build/dep/Main.cpp.Td build/dep/Main.cpp.d && touch build/obj/Main.cpp.o \
	&& \
	g++.exe -std=c++17 -Llib/ -LC:/SFML-2.5.1/lib -LC:/TGUI-0.8/lib \
	-s -o \
	build/CalculadoraEspacioAfin.exe build/obj/Linux/LinuxHelper.cpp.o \
	build/obj/MacOS/MacHelper.cpp.o \
	build/obj/Main.cpp.o \
	build/obj/Win32/Icon.res build/obj/Win32/WindowsHelper.cpp.o \
	-lsfml-graphics -lsfml-audio -lsfml-network -lsfml-window -lsfml-system -ltgui -mwindows

