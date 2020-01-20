
[x, y] = meshgrid(-40:1:40);
z = M(1)*x + M(2).*y + M(4);

[x2, y2] = meshgrid(-40:1:40);
z2 = M(5)*x + M(6)*y + M(8);

[x3, y3] = meshgrid(-40:1:40);
z3 = M(9)*x + M(10)*y + M(12);

surf(x,y,z);
hold on;
surf(x2,y2,z2);
hold on;
surf (x3,y3,z3);
alpha(0.6);

saveas(gcf,'matlab-scripts/matlabOutImg.png')
close force;

asses = rank(M);
switch asses
    case 3
        if rank(m) == 2
            %DOUBLE LINE INTERSECTION
            system("./resultHandler.exe 1 2 3 Los_ planos_ cortan_ a_dos 7 8 9 &");
            system("exit");
        else
            %SINGLE POINT INTERSECTION
            system("./resultHandler.exe 1 2 3 Los_ planos_ cortan_ en_uno 7 8 9 &");
            system("exit");
        end
    case 2
        if rank(m) == 2
            %SINGLE LINE INTERSECTION
            system("./resultHandler.exe 1 2 3 Los_ planos_ cortan en_linea 7 8 9 &");
            system("exit");
        else
            %INDEPENDENT OR 1 OVERLAPPING PLANE
            system("./resultHandler.exe 1 2 3 Los_ planos_ son independientes 7 8 9 &");
            system("exit");
        end
    otherwise
        %TRIPLE OVERLAPPING
        system("./resultHandler.exe 1 2 3 Los_ planos_ se_ superponen 7 8 9 &");
        system("exit");
end
quit