
[x, y] = meshgrid(-10:1:10);
z = n(1)*x + n(2).*y + n(4);

v = [r(1) r(2) r(3); r(1)+r(4) r(2)+r(5) r(3)+r(6)];

surf(x,y,z);
alpha(0.5);
hold on;
plot3(v(:,1),v(:,2),v(:,3),'*');
hold on;
plot3(v(:,1),v(:,2),v(:,3),'r');

saveas(gcf,'matlab-scripts/matlabOutImg.png')
close force;

p = n(1)*r(1) + n(2)*r(2) + n(3)*r(3) + n(4);
Q = n(1)*r(4) + n(2)*r(5) + n(3)*r(6);

if Q == 0
    if p == 0
        %OVERLAPPING
        system("./resultHandler.exe 1 2 3 Recta_ conteni da_en_ plano 7 8 9 &");
        system("exit");
    else 
        %PARALLEL
        system("./resultHandler.exe 1 2 3 Recta_ paralela_ al_ plano 7 8 9 &");
        system("exit");
    end
else
    %INTERSECT
    system("./resultHandler.exe 1 2 3 Recta_ corta_ con_ plano 7 8 9 &");
    system("exit");
end
quit