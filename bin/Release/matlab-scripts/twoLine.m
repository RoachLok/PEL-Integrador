v2 = [v1(1)+m(1), v1(2)+m(2) ,v1(3)+m(3)];
v22 = [v12(1)+(-m(4)), v12(2)+(-m(5)) ,v12(3)+(-m(6))];

v=[v2;v1];

figure1 = figure;

plot3(v(:,1),v(:,2),v(:,3),'r')
hold on;

V=[v22;v12];
plot3(v(:,1),v(:,2),v(:,3),'*')
plot3(V(:,1),V(:,2),V(:,3),'*')
plot3(V(:,1),V(:,2),V(:,3),'r')

saveas(figure1,'matlab-scripts/matlabOutImg.png')
close force;
asses = rank(M);
switch asses
    case 3
        %CROSSNG
        system("./resultHandler.exe 1 2 3 Las_ rectas_ se_ cruzan 7 8 9 &");
        system("exit");
    case 2
        %PARALLEL OR SECANT
        if rank(m) == 2
            %SECANT
            system("./resultHandler.exe 1 2 3 Las_ rectas_ se_ cortan 7 8 9 &");
            system("exit");
        else
            %PARALEL
            system("./resultHandler.exe 1 2 3 Las_ rectas_ son_ paralelas 7 8 9 &");
            system("exit");
        end
    case 1
        %OVERLAPPING
        system("./resultHandler.exe 1 2 3 Las_ rectas_ coin ciden 7 8 9 &");
        system("exit");
    otherwise
        exit
end
quit
