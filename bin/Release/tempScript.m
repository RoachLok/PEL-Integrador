m = [11 25 36 ;10 20 30 ];
M = [11 25 36 -3 ;10 20 30 40 ];
[x, y] = meshgrid(-75:1:75);
z = M(1)*x + M(2).*y + M(4);

[x2, y2] = meshgrid(-75:1:75);
z2 = M(5)*x + M(6)*y + M(8);

asses = rank(M);
switch asses
    case 2
        %PARALLEL OR SECANT
        surf(x,y,z);
        hold on;
        surf(x2,y2,z2);

        saveas(gcf,'matlab-scripts/matlabOutImg.png')
        close force;
        if rank(m) == 2
            %SECANT
            system("./resultHandler.exe 1 2 3 Los_ planos_ se_ cortan 7 8 9 &");
            system("exit");
        else
            %PARALLEL
            system("./resultHandler.exe 1 2 3 Los_ planos_ son_ paralelos 7 8 9 &");
            system("exit");
        end
    case 1
        %OVERLAPPING
        surf(x,y,z);
        saveas(gcf,'matlab-scripts/matlabOutImg.png')
        close force;
        
        system("./resultHandler.exe 1 2 3 Los_ planos_ coin ciden 7 8 9 &");
        system("exit");
    otherwise
        exit
end
quit
